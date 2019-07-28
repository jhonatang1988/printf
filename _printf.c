#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - print format string
 * @format: string
 *
 * Return: num of chars print
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list);
	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
			printf("%c", *format++);
		else
		{
			printf("%% true\n");

			f = get_func((++format));

			if (!f)
				printf("%%%c", *format++);
			else
				return (f(list));
		}
	}

	// printf("das %d\n");
	va_end(list);
	return (0);
}
