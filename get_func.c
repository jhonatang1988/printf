#include "holberton.h"
#include <stdlib.h>
#include "struct.h"
/**
 * get_func - callbacks a functions dependind on the _printf identifier
 *
 * fid: the identifier
 *
 * Return: the address or pointer to the function selected
 */
int (*get_func(const char *s))(va_list)
{
	print_methods pm[] = {
		{"s", cb_print_string},
		{"c", cb_print_char},
		{NULL, NULL}
	};

	int i = 0;

	while (pm[i].fid != NULL)
	{
		if (pm[i].fid[0] == s[0])
		{
			return (pm[i].func);
			i++;
		}
	}

	return (NULL);
}