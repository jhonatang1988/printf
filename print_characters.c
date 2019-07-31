#include "holberton.h"

/**
 * print_string_reverse - print string reverse
 * @s: string
 *
 * Return: num of char printed
 */
int print_string_reverse(char *s)
{
	int i = 0;

	if (!*s)
		return (0);

	i += print_string_reverse(s + 1) + 1;
	_putchar(*s);
	return (i);
}

/**
 * cb_print_string_r - print string
 * @list: by get argument
 *
 * Return: num of char printed
 */
int cb_print_string_r(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(null)";

	return (print_string_reverse(s));
}

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

	return (l);
}

/**
 * cb_print_rot13 - print string in rot13
 * @list: by get argument
 *
 * Return: Always 1
 */
int cb_print_rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int zZ = 0, l = 0;
	char c = 0;

	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			zZ = (*s <= 'Z') ? 90 : 122;
			c = (zZ >= (*s + 13)) ? (*s + 13) : (*s + 13) - 26;
			_putchar(c);
			s++;
		}
		else
		{
			_putchar(*s++);
		}

		l++;
	}

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
