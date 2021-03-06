#ifndef _SERIAL_OPT
#define _SERIAL_OPT


#define SER_SYMBOL 2
#include "perfaction_internal.h"

/* Deserial */

void deserial_init(void);
void deserial_free(void);
void deserial_prim(void * in, typ type, void * out);
/* return 1 to traverse inside struct. return 0 to not traverse inside struct */
int deserial_struct(void *in, typ type, void *out);
/* return a pointer to continue traversal. return NULL to not traverse this branch further */
int deserial_ptr(void **in, typ type, void **out);
/* what to do with an already visted heap item */
void deserial_ptr_mapped(void **in, typ type, void **out);



/* Serial */
void serial_init(void);
void serial_free(void);
void serial_prim(void * in, typ type, void *out);
/* return 1 to traverse inside struct. return 0 to not traverse inside struct */
int serial_struct(void *in, typ type, void *out);
/* return a pointer to continue traversal. return NULL to not traverse this branch further */
int serial_ptr(void **in, typ type, void **out);
/* what to do with an already visted heap item */
void serial_ptr_mapped(void **in, typ type, void **out);
/*internal*/
void serial_char_str(void * addr);
void serial_check_for_symbol(void * lookup);
void serial_write_int(int i);
void serial_write_null(void);
void serial_internal_write(void * to_wr, int sz);
void serial_internal_read(void * to_rd, int sz);


#endif
