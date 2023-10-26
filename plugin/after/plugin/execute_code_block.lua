-- NOTE: This currently only works with a single code block on the_code
-- page because editing the first block might change the positining on the
-- page which would mess with later blocks.
--
-- NOTE: The -- /results block can't be the last thing right now.
-- Another section has to be behind it for it to work. Not worried about
-- that right now given the standard of having metadata at the end of
-- every page
--

local log = function(message, runner)
  if runner.debug_buffer then
    vim.api.nvim_buf_set_lines(
      runner.debug_buffer, -1, -1, false, { message }
    )
  end
end

function string:split(delimiter)
  local result               = {}
  local from                 = 1
  local delim_from, delim_to = string.find(self, delimiter, from)
  while delim_from do
    table.insert(result, string.sub(self, from, delim_from - 1))
    from                 = delim_to + 1
    delim_from, delim_to = string.find(self, delimiter, from)
  end
  table.insert(result, string.sub(self, from))
  return result
end

local function remove_trailing_empty_lines(source)
  local reversed = {}
  local load_counter = #source
  local hit_content = false
  while load_counter > 0 do
    if source[load_counter] ~= "" then
      hit_content = true
      table.insert(reversed, source[load_counter])
    elseif hit_content == true then
      table.insert(reversed, source[load_counter])
    end
    load_counter = load_counter - 1
  end
  local trimmed = {}
  local reverse_counter = #reversed
  while reverse_counter > 0 do
    table.insert(trimmed, reversed[reverse_counter])
    reverse_counter = reverse_counter - 1
  end
  return trimmed
end

local function table_length(source)
  local count = 0
  for _ in pairs(source) do
    count = count + 1
  end
  return count
end

local function chomp_whitespace(runner)
  if runner.section_text then
    log("Chomping whitespace" .. runner.section_range[1], runner)
    log("Chomping whitespace" .. runner.section_range[3], runner)
    local section_lines = runner.section_text:split("\n")
    for i, line in ipairs(section_lines) do
      -- log("Line: " .. i .. " - " .. line, runner)
    end
    log("Initial lines: " .. #section_lines, runner)
    local trimmed_section_lines = remove_trailing_empty_lines(section_lines)
    table.insert(trimmed_section_lines, "")
    log("Trimmed lines: " .. #trimmed_section_lines, runner)
    log(trimmed_section_lines[2], runner)
    vim.api.nvim_buf_set_lines(
      runner.bufnr, runner.section_range[1],
      runner.section_range[3], false, trimmed_section_lines
    )
  end
end


local get_code = function(runner)
  log("- get_code", runner)
  local query = vim.treesitter.query.parse("neopolitan",
    [[ ((code_section_body) @content) ]])
  local parser = vim.treesitter.get_string_parser(runner.section_text, "neopolitan", {})
  local tree = parser:parse()[1]
  local root = tree:root()
  for _, node in query:iter_captures(root) do
    runner.code = vim.treesitter.get_node_text(node, runner.section_text, {})
    -- runner.code_lines = split_lines(runner.code)
    -- log(runner.code_lines[3], runner)
  end
end

local get_language = function(runner)
  log("- get_language", runner)
  local query = vim.treesitter.query.parse("neopolitan",
    [[ ((boolean_value) @lang) ]])
  local parser = vim.treesitter.get_string_parser(runner.section_text, "neopolitan", {})
  local tree = parser:parse()[1]
  local root = tree:root()
  for _, node in query:iter_captures(root) do
    runner.language = vim.treesitter.get_node_text(node, runner.section_text, {})
  end
end

local function get_section(runner)
  log("- get_section", runner)
  local query = vim.treesitter.query.parse("neopolitan",
    [[ ( neo_doc ((code_section)) @code ) ]])
  local parser = vim.treesitter.get_parser(runner.bufnr, "neopolitan", {})
  local tree = parser:parse()[1]
  local root = tree:root()
  for _, node in query:iter_captures(root, runner.bufnr, 0, -1) do
    local section_range = { node:range() }
    if runner.cursor_line > section_range[1] and runner.cursor_line <= section_range[3] then
      runner.section_range = section_range
      runner.section_node = node
      runner.section_text = vim.treesitter.get_node_text(runner.section_node, runner.bufnr, {})
    end
    --runner.code_text = get_code_text(runner)
    -- if runner.cursor_line > runner.code_start_line and runner.cursor_line <= runner.code_end_line then
    --   -- print(node:next_sibling())
    --   runner.language = get_code_section_language(runner.code_node_text)
    -- end
  end
end

local function get_result_range(runner)
  log("- get_result_range", runner)
  local next_node = runner.section_node:next_named_sibling()
  if next_node:type() == "results_container" then
    log("- found existing results", runner)
    runner.results_start = next_node:start()
    runner.results_end = next_node:end_()
  else
    log("- did not find existing results", runner)
    runner.results_start = runner.section_node:end_()
    runner.results_end = runner.section_node:end_()
  end
end

local function output_results_v2(runner)
  log("- output_results_v2", runner)

  output = { "-- results/", "" }
  if runner.message then
    table.insert(output, runner.message)
  end
  -- it seems like there's always one
  -- element that's empty? or maybe it's always
  -- a newline, not sure, but this is working
  -- with the check for greater than on
  -- will have to keep an eye out for if anything
  -- sends back data without an ending newline to
  -- see if that works
  if #runner.stdout > 1 then
    log("" .. #runner.stdout, runner)
    for _, line in ipairs(runner.stdout) do
      table.insert(output, line)
    end
  end
  if #runner.stderr > 1 then
    for _, line in ipairs(runner.stderr) do
      table.insert(output, line)
    end
  end
  table.insert(output, "-- /results")
  table.insert(output, "")
  table.insert(output, "")
  vim.api.nvim_buf_set_lines(
    runner.bufnr, runner.results_start,
    runner.results_end, false, output
  )
end

local function output_error(data, runner)
  log("- output_error", runner)
  output = { "-- results/", "", "Error" }
  for _, line in ipairs(data) do
    table.insert(output, line)
  end
  table.insert(output, "-- /results")
  table.insert(output, "")
  table.insert(output, "")
  log(runner.results_start)
  log(runner.results_end)
  vim.api.nvim_buf_set_lines(
    runner.bufnr, runner.results_start,
    runner.results_end, false, output
  )
end

local function output_results(data, runner)
  log("- output_results", runner)
  output = { "-- results/", "" }
  for _, line in ipairs(data) do
    table.insert(output, line)
  end
  table.insert(output, "-- /results")
  table.insert(output, "")
  table.insert(output, "")
  log(runner.results_start, runner)
  log(runner.results_end, runner)
  vim.api.nvim_buf_set_lines(
    runner.bufnr, runner.results_start,
    runner.results_end, false, output
  )
end

local function run_code(runner)
  log("- run_code", runner)
  local the_job = vim.fn.jobstart(
    runner.commands,
    {
      stdout_buffered = true,
      stderr_buffered = true,
      on_stdout = function(_, data)
        log("- on_stdout", runner)
        runner.stdout = data
      end,
      on_stderr = function(_, data)
        log("- on_stderr", runner)
        runner.stderr = data
      end,
      on_exit = function(job_id, exit_code, exit_type)
        output_results_v2(runner)
      end
    })

  local job_exit_code = vim.fn.jobwait({ the_job }, 7000)
  if job_exit_code[1] == -1 then
    vim.fn.jobstop(the_job)
    runner.message = "Process took to long and was halted"
    output_results_v2(runner)
  end
end

local function prep_python(runner)
  log("- prep_python", runner)
  runner.commands = { "python3", "-c", runner.code }
  run_code(runner)
end

local function prep_rust(runner)
  log("- prep_rust", runner)
  runner.commands = {}
  local script_file_path = '/Users/alan/Desktop/tmp-neo-execute-script.rs'
  local script_file = io.open(script_file_path, "w")
  io.output(script_file)
  io.write(runner.code)
  io.close(script_file)
  table.insert(runner.commands, "/Users/alan/.cargo/bin/cargo")
  table.insert(runner.commands, "+nightly")
  table.insert(runner.commands, "-Zscript")
  table.insert(runner.commands, script_file_path)
  run_code(runner)
end

local function prep_lua(runner)
  log("- prep_lua", runner)
  runner.commands = {}
  local script_file_path = '/Users/alan/Desktop/tmp-neo-execute-script.lua'
  local script_file = io.open(script_file_path, "w")
  io.output(script_file)
  io.write(runner.code)
  io.close(script_file)
  table.insert(runner.commands, "/opt/homebrew/bin/lua")
  table.insert(runner.commands, script_file_path)
  run_code(runner)
  -- vim.cmd("source /Users/alan/Desktop/tmp-neo-execute-script.lua")
end

-- local function prep_lua(runner)
--   log("- prep_lua", runner)
--   runner.commands = {}
--   local script_file_path = '/Users/alan/Desktop/tmp-neo-execute-script.lua'
--   local script_file = io.open(script_file_path, "w")
--   io.output(script_file)
--   io.write(runner.code)
--   io.close(script_file)
--   vim.cmd("source /Users/alan/Desktop/tmp-neo-execute-script.lua")
-- end

local function prep_bash(runner)
  log("- prep_bash", runner)
  runner.commands = { "bash", "-c", runner.code }
  run_code(runner)
end


local open_debug_window = function()
  local main_window_id = vim.api.nvim_get_current_win()
  local pop_buffer = vim.api.nvim_create_buf(false, true)
  local pop_window = vim.api.nvim_open_win(pop_buffer, true, {
    style = "minimal",
    relative = 'editor',
    row = 4,
    col = 8,
    width = 50,
    height = 20,
    border = 'single'
  })
  return pop_buffer
end



function Execute_code_block(bufnr)
  local runner = {
    bufnr = bufnr or vim.api.nvim_get_current_buf(),
    cursor_line = vim.fn.getcurpos()[2],
    -- debug_buffer = open_debug_window()
  }
  log("- Starting", runner)
  get_section(runner)
  chomp_whitespace(runner)
  get_section(runner)
  if runner.section_text then
    get_code(runner)
    get_language(runner)
    if runner.language then
      get_result_range(runner)
      if runner.language == "bash" then
        prep_bash(runner)
      elseif runner.language == "lua" then
        prep_lua(runner)
      elseif runner.language == "python" then
        prep_python(runner)
      elseif runner.language == "rust" then
        prep_rust(runner)
      else
        print("Can't run unknown code language")
      end
    else
      print("Can't run code without a language")
    end
  else
    print("Not in a code section")
  end
  log("- Process complete", runner)
end

-- local function run_a_code_block(payload)
--   local commands = {}
--   if payload.language == "python" then
--     table.insert(commands, "python3")
--     table.insert(commands, "-c")
--     table.insert(commands, payload.code)
--     payload.ready = true
--   elseif payload.language == "rust" then
--     local script_file_path = '/Users/alan/Desktop/tmp-neo-execute-script.rs'
--     local script_file = io.open(script_file_path, "w")
--     io.output(script_file)
--     io.write(payload.code)
--     io.close(script_file)
--     table.insert(commands, "/Users/alan/.cargo/bin/cargo")
--     table.insert(commands, "+nightly")
--     table.insert(commands, "-Zscript")
--     table.insert(commands, script_file_path)
--     payload.ready = true
--   elseif payload.language == "lua" then
--     local script_file_path = '/Users/alan/Desktop/tmp-lua-code.lua'
--     local script_file = io.open(script_file_path, "w")
--     io.output(script_file)
--     io.write(payload.code)
--     io.close(script_file)
--     local out_string = vim.cmd('source /Users/alan/Desktop/tmp-lua-code.lua')
--     -- table.insert(commands, "/Users/alan/.cargo/bin/cargo")
--     -- table.insert(commands, "+nightly")
--     -- table.insert(commands, "-Zscript")
--     -- table.insert(commands, script_file_path)
--     -- payload.ready = true
--   end
--   if payload.ready then
--     vim.fn.jobwait({ vim.fn.jobstart(
--       commands,
--       {
--         stdout_buffered = true,
--         stderr_buffered = true,
--         on_stdout = function(_, data)
--           update_to_results(data, payload)
--         end,
--         -- need to figure out how to make This
--         -- not throw errors when things are okay
--         on_stderr = function(_, data)
--           log_error(data, payload)
--         end
--       })
--     })
--   end
-- end

-- Get_code_section_with_existing_results_container = function(bufnr)
--   local query = vim.treesitter.query.parse("neopolitan",
--     [[ ((neo_doc ((code_section) @code . (results_container) @results))) ]])
--   local parser = vim.treesitter.get_parser(bufnr, "neopolitan", {})
--   local tree = parser:parse()[1]
--   local root = tree:root()
--   local counter = 1
--   local payload = { bufnr = bufnr }
--   for _, node in query:iter_captures(root, bufnr, 0, -1) do
--     if counter == 1 then
--       local code_section = vim.treesitter.get_node_text(node, bufnr, {})
--       payload.code = get_code_block(code_section)
--       payload.language = get_code_section_language(code_section)
--     end
--     if counter == 2 then
--       local results_range = { node:range() }
--       payload.results_start = results_range[1]
--       payload.results_end = results_range[3]
--       run_a_code_block(payload)
--     end
--     counter = counter + 1
--   end
-- end

-- Get_code_section_without_existing_results_container = function(bufnr)
--   local query = vim.treesitter.query.parse("neopolitan",
--     [[ (( neo_doc ((code_section) @code ) !results_container )) ]])
--   local parser = vim.treesitter.get_parser(bufnr, "neopolitan", {})
--   local tree = parser:parse()[1]
--   local root = tree:root()
--   local counter = 1
--   local payload = { bufnr = bufnr }
--   for _, node in query:iter_captures(root, bufnr, 0, -1) do
--     if counter == 1 then
--       local code_section = vim.treesitter.get_node_text(node, bufnr, {})
--       payload.code = get_code_block(code_section)
--       payload.language = get_code_section_language(code_section)
--       local code_range = { node:range() }
--       payload.results_start = code_range[3]
--       payload.results_end = code_range[3]
--       run_a_code_block(payload)
--     end
--     --local node_range = { node:range() }
--     --local replace_line = node_range[3]
--     --local code_section = vim.treesitter.get_node_text(node, bufnr, {})
--     --language = get_code_section_language(code_section)
--     --code = get_code_block(code_section)
--     --vim.fn.jobwait({ vim.fn.jobstart(
--     --  { "python3", "-c", code },
--     --  {
--     --    stdout_buffered = true,
--     --    stderr_buffered = true,
--     --    on_stdout = function(_, data)
--     --      if data then
--     --        output = { "-- results/", "" }
--     --        for _, line in ipairs(data) do
--     --          table.insert(output, line)
--     --        end
--     --        table.insert(output, "-- /results")
--     --        table.insert(output, "")
--     --        vim.api.nvim_buf_set_lines(
--     --          bufnr, replace_line, replace_line, false, output
--     --        )
--     --      end
--     --    end,
--     --    -- This causing blank lines when there aren't
--     --    -- errors. not worrying about it for now
--     --    on_stderr = function(_, data)
--     --      if #data > 1 then
--     --        --output = { "-- results/", "" }
--     --        -- for _, line in ipairs(data) do
--     --        --table.insert(output, line)
--     --        -- end
--     --        --table.insert(output, "-- /results")
--     --        --vim.api.nvim_buf_set_lines(
--     --        -- bufnr, replace_start, replace_end, false, output
--     --        --)
--     --      end
--     --    end,
--     --  }
--     --) })
--     --end
--   end
-- end





-- local get_results_range = function(raw_string)
--   local query = vim.treesitter.query.parse(
--     "neopolitan",
--     [[ ((results_container) @content) ]])
--   local parser = vim.treesitter.get_string_parser(raw_string, "neopolitan", {})
--   local tree = parser:parse()[1]
--   local root = tree:root()
--   for _, node in query:iter_captures(root) do
--     return { node:range() }
--   end
-- end

--get_code_section_result_pairs = function(bufnr)
--  local query = vim.treesitter.query.parse(
--    "neopolitan",
--    [[ ((code_section_results_pair) @content) ]])
--  local parser = vim.treesitter.get_parser(bufnr, "neopolitan", {})
--  local tree = parser:parse()[1]
--  local root = tree:root()
--  for _, node in query:iter_captures(root, bufnr, 0, -1) do
--    local section_range = { node:range() }
--    local code_section = vim.treesitter.get_node_text(node, bufnr, {})
--    local code = get_code_block(code_section)
--    local results_range = get_results_range(code_section)
--    local replace_start = section_range[1] + results_range[1]
--    local replace_end = section_range[1] + results_range[3] + 1
--    vim.fn.jobstart(
--      { "python3", "-c", code },
--      {
--        stdout_buffered = true,
--        stderr_buffered = true,
--        on_stdout = function(_, data)
--          if data then
--            output = { "-- results/", "" }
--            for _, line in ipairs(data) do
--              table.insert(output, line)
--            end
--            table.insert(output, "-- /results")
--            vim.api.nvim_buf_set_lines(
--              bufnr, replace_start, replace_end, false, output
--            )
--          end
--        end,
--        -- This causing blank lines when there aren't
--        -- errors. not worrying about it for now
--        on_stderr = function(_, data)
--          if #data > 1 then
--            --output = { "-- results/", "" }
--            -- for _, line in ipairs(data) do
--            --table.insert(output, line)
--            -- end
--            --table.insert(output, "-- /results")
--            --vim.api.nvim_buf_set_lines(
--            -- bufnr, replace_start, replace_end, false, output
--            --)
--          end
--        end,
--      }
--    )
--  end
--end

-- Prototype Neopolitan Code Block Execution

-- vim.keymap.set({ 'n', 'i' }, '<M-R>', function() get_code_section_result_pairs(vim.api.nvim_get_current_buf()) end)
