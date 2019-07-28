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
	int (*f)(valist);
	va_list list;

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
			printf("%c", *format++);
		else
		{
			f = get_funtcion(*(++format));

			if (!f)
				printf("%%%c", *format++);

			f(list);
		}
	}

	// printf("das %d\n");
	va_end(list);
	return (0);
}
