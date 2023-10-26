local lines = vim.api.nvim_buf_get_lines(0, 0, 1, false)
local first_line = lines[1]
print(first_line)
