#ifndef STRUCT_H
#define STRUCT_H
/**
 * struct print_methods - struct for all print identifiers
 *
 * @fid: the identifier
 * @func: the function to return to print as needed by the identifier
 */
typedef struct print_methods
{
	char *fid;
	int (*func)(va_list list);
} print_methods;
#endif /* STRUCT_H */
