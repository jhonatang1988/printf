#include "holberton.h"
/**
 * cb_print_hex_integers - format specifier for hexagesimal x
 * @list: list of arguments
 *
 * Return: num of int digits ie lenght
 */
int cb_print_hex_integers(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int bit;
	int j;
	int len = 0;
	int flag = 0;
	char hexDigits[] = {'0', '1', '2', '3', '4', '5',
			    '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char hex;

	if (n == 0)
	{
		return (_putchar('0'));
	}

	for (j = (sizeof(int) * 8) - 4; j >= 0; j = j - 4)
	{
		bit = (n >> j & 0xF);

		if (bit && flag == 0)
			flag = 1;
		if (bit || flag)
		{
			hex = hexDigits[bit];
			_putchar(hex);
			len++;
		}
	}

	return (len);
}
