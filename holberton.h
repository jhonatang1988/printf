#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *s))(va_list);
int cb_print_string(va_list list);
int cb_print_char(va_list list);
#endif /* HOLBERTON_H */
