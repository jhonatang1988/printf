#include "holberton.h"

/**
 * cb_print_string - print string
 * @list: by get argument
 *
 * Return: num of char printed
 */
int cb_print_string(va_list list)
{
	char *s = va_arg(list, char *);
	int l = 0;

	if (!s)
		s = "(null)";

	for (l = 0; *s; l++)
		_putchar(*s++);

	_putchar('\0');
	return (l);
}

/**
 * cb_print_char - print char
 * @list: by get argument
 *
 * Return: Always 1
 */
int cb_print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
