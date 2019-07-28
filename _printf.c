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
			_putchar(*format);
		else
		{
			f = get_func(++format);

			if (!f)
			{
				_putchar('%');
				_putchar(*format);
			}
			else
				(f(list));
		}

		format++;
	}

	va_end(list);
	return (0);
}
