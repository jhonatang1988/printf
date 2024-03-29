#include "holberton.h"
/**
 * cb_print_binary - print integer in binary
 * @list: argument
 *
 * Return: return num of char printed
 */
int cb_print_binary(va_list list)
{
	int n = va_arg(list, int);
	int flag = 0, l = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (_putchar('0'));
	}

	for (i = 0; i < sizeof(int) * 8; i++)
	{
		int bit = ((n << i) & 0x80000000) ? 1 : 0;

		if (bit && flag == 0)
			flag = 1;

		if (bit || flag)
		{
			_putchar(bit + '0');
			l++;
		}
	}

	return (l);
}
