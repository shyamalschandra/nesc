#ifndef NESC_ATTIBUTES_H
#define NESC_ATTIBUTES_H

void init_nesc_attributes(void);

tag_declaration start_attribute_use(word name);
attribute finish_attribute_use(word name, expression init, tag_declaration tdecl);

void define_internal_attribute(const char *name,
			       void (*handle_ndecl)(nesc_attribute attr,
						    nesc_declaration ndecl),
			       void (*handle_decl)(nesc_attribute attr,
						    data_declaration ddecl),
			       void (*handle_tag)(nesc_attribute attr,
						  tag_declaration tdecl),
			       void (*handle_field)(nesc_attribute attr,
						    field_declaration fdecl),
			       ...);
/* Effects: Declare an internal (compiler) @-style attribute called 'name',
     handled by the handle functions. Functions can be NULL if the
     attribute cannot be used on that kind of entity.     
     Arguments to the attribute are specified by an
       fieldname, fieldtype argument list
     terminated with a null fieldname.
     Example: the @integer() attribute is declared with
       define_internal_attribute("integer", handle_integer_attribute, NULL);
*/

ivalue lookup_attribute_field(nesc_attribute attr, const char *name);
/* Returns: The initialiser for field name in attr, or NULL if it's not
     found 
*/

bool handle_nesc_type_attribute(nesc_attribute attr, type *t);
void handle_nesc_decl_attribute(nesc_attribute attr, data_declaration ddecl);
void handle_nesc_field_attribute(nesc_attribute attr, field_declaration fdecl);
void handle_nesc_tag_attribute(nesc_attribute attr, tag_declaration tdecl);
void handle_nesc_nescdecl_attribute(nesc_attribute attr, nesc_declaration ndecl);

#endif
