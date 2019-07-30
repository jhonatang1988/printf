#include "holberton.h"
int get_first_one_pos(int n);
/**
 * cb_print_octal_integers - prints an octal integer
 * @list: list of arguments
 *
 * Return: num of int digits ie lenght
 */
int cb_print_octal_integers(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int bit;
	int j;
	int len = 0;
	int flag = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}

	for (j = (sizeof(int) * 8) - 2; j >= 0; j = j - 3)
	{
		bit = (n >> j & 0x7);

		if (bit && flag == 0)
			flag = 1;
		if (bit || flag)
		{
			_putchar(bit + '0');
			len++;
		}
	}

	return (len);
}
