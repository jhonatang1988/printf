#include "holberton.h"
/**
 * get_func - callbacks a functions dependind on the _printf identifier
 *
 * @s: string with the specifier
 *
 * Return: the address or pointer to the function selected
 */
int (*get_func(const char *s))(va_list)
{
	print_methods pm[] = {
		{"s", cb_print_string},
		{"c", cb_print_char},
		{"d", cb_print_integers},
		{"i", cb_print_integers},
		{"u", cb_print_unsigned_integers},
		{"o", cb_print_octal_integers},
		{"r", cb_print_string_r},
		{"b", cb_print_binary},
		{"x", cb_print_hex_integers},
		{"X", cb_print_hex_capital_integers},
		{NULL, NULL}
	};

	int i = 0;

	while (pm[i].fid != NULL)
	{
		if (pm[i].fid[0] == s[0])
		{
			return (pm[i].func);
		}

		i++;
	}

	return (NULL);
}
