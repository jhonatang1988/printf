#include "holberton.h"
/**
 * cb_print_pointers - format to print a pointer
 * @list: list of arguments
 *
 * Return: num of int digits ie lenght
 */
int cb_print_pointers(va_list list)
{
	intptr_t n = va_arg(list, intptr_t);
	int bit;
	int j;
	int len = 0;
	int flag = 0;
	char hexDigits[] = {'0', '1', '2', '3', '4', '5',
			    '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	char hex;

	if (n == 0)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		return(5);
	}

	_putchar('0');
	_putchar('x');
	len = 2;

	for (j = (sizeof(void *) * 8) - 4; j >= 0; j = j - 4)
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
