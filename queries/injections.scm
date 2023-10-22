; ((code_section_results_pair
;    (code_section
;      attr_bool_value: (word_raw) @injection.language
;      code_section_body: (code_section_body) @injection.content
;      )))


((code_section
   (attribute
      (boolean_attribute
       boolean_value:
          (boolean_value) @injection.language))
    code_section_body: (code_section_body) @injection.content))

; ((code_container
;     attr_bool: 
;       (attr_bool
;         attr_bool_value: 
;           (attr_bool_value) @injection.language)
;     code_container_body: (code_container_body) @injection.content))


((css_section_body) @injection.content 
 (#set! injection.language "css"))

((html_container_body) @injection.content 
 (#set! injection.language "html"))

((html_section_body) @injection.content 
 (#set! injection.language "html"))

((script_section_body) @injection.content 
 (#set! injection.language "javascript"))
