#include <stdlib.h>
#include "holberton.h"
#include "struc.h"
/**
 * get_func - callbacks a functions dependind on the _printf identifier
 *
 * fid: the identifier
 *
 * Return: the address or pointer to the function selected
 */
int (*get_func(char *s))(va_list)
{
	print_methods pm[] = {
		{"c", cb_print_character},
		{"s", cb_print_string},
		{NULL, NULL}
	};

	i = 0;

	while (pm[i].print_methods[0] == s[0])
	{
		return (pm[i].func);
		i++;
	}

	return (0);
}
