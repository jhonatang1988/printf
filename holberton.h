#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *s))(va_list);
int cb_print_string(va_list list);
int cb_print_char(va_list list);
int cb_print_percentage(va_list list);

#endif /* HOLBERTON_H */
