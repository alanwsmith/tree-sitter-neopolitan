((html_section_body) @injection.content 
 (#set! injection.language "html"))

((code_section
    attr_bool: 
      (attr_bool
        attr_bool_value: 
          (attr_bool_value) @injection.language)
    code_section_body: (code_section_body) @injection.content))

