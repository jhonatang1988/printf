#include "holberton.h"
/**
 * cb_print_unsigned_integers - prints an unsigned integer
 * @list: list of arguments
 *
 * Return: num of int digits ie lenght
 */
int cb_print_unsigned_integers(va_list list)
{
	unsigned int n  = va_arg(list, unsigned int);
	char nString[INT_DEC_SIZE * 2];
	unsigned int i;
	unsigned int j;
	char c;

	_unsigneditoa(n, nString, 10);

	for (i = 0; nString[i] != '\0'; i++)
		;

	for (j = 0; j < i; j++)
	{
		c = nString[j];
		_putchar(c);
	}
	return (i);
}

/**
 * strreverse - reverse the string created based on the null character
 *
 * @begin: first char
 * @end: last char
 *
 * Return: Nothing
 */

void unsignedstrreverse(char *begin, char *end)
{

	char aux;

	while (end > begin)
		aux = *end, *end-- = *begin, *begin++ = aux;

}
/**
 * _itoa - convert a into a string based on Kernighan and Ritchie
 * @value: the int
 * @str: the char array to fill with the int digits
 * @base: decimal, octagonal etc...
 *
 * Return: Nothing
 */
void _unsigneditoa(unsigned int value, char *str, int base)
{
	const char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char *wstr = str;

	if (base < 2 || base > 35)
	{
		*wstr = '\0';
		return;
	}

	do
		* wstr++ = num[value % base];
	while (value /= base);

	*wstr = '\0';

	unsignedstrreverse(str, wstr - 1);

}
