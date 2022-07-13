#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printNum - prints int recursively
 * @a: arg
 */

void printNum(int a)
{
	int digit;

	if ((a / 10) != 0)
	{
		printNum(a / 10);
	}
	digit = (a % 10) + '0';
	write(1, &digit, 1);
}

/**
 * printDec - prints decimal numbers
 * @s: points to the decimal to be printed
 */

void printDec(va_list s)
{
	int i;

	i = va_arg(s, int);
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	printNum(i);
}
