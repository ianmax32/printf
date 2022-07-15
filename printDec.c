#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printNum - prints int recursively
 * @a: arg
 * Return: count
 */

int printNum(int a)
{
	int num, count;

	count = 0;
	if ((a / 10) != 0)
	{
		printNum(a / 10);
		count++;
	}
	num = (a % 10) + '0';
	write(1, &num, 1);
	return (count);
}

/**
 * printDec - prints decimal numbers
 * @s: points to the decimal to be printed
 * Return: count
 */

int printDec(va_list s)
{
	int i, count;

	count = 0;
	i = va_arg(s, int);
	if (i < 0)
	{
		_putchar('-');
		count++;
		i = (-1) * i;
	}
	count += printNum(i);
	return (count++);
}
