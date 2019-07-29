#include "holberton.h"
/**
 * cb_print_integers - prints an integer
 * @list: list of arguments
 *
 * Return: num of int digits
 */
int cb_print_integers(va_list list)
{
	int n  = va_arg(list, int);
	char nString[INT_DEC_SIZE];
	unsigned int i;
	unsigned int j;
	char c;
	int int_min_case = 0;

	if (n == INT_MIN)
	{
		n++;
		int_min_case = 1;
	}
	_itoa(n, nString, 10);

	for (i = 0; nString[i] != '\0'; i++)
		;

	if (int_min_case)
	{
		nString[i - 1] = nString[i - 1] + 1;
	}

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

void strreverse(char *begin, char *end)
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
void _itoa(int value, char *str, int base)
{
	const char num[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	char *wstr = str;
	int sign;

	if (base < 2 || base > 35)
	{
		*wstr = '\0';
		return;
	}

	sign = value;
	if (sign < 0)
		value = -value;

	do
		* wstr++ = num[value % base];
	while (value /= base);

	if (sign < 0)
		*wstr++ = '-';
	*wstr = '\0';

	strreverse(str, wstr - 1);

}
