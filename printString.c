#include "main.h"
#include <stdarg.h>
/**
 * printString - function prints string from a va_list
 * @s:argument parameter
 * Return: count
 */

int printString(va_list s)
{
	char *i;
	int count;

	i = va_arg(s, char *);
	count = 0;

	while (*i != '\0')
	{
		_putchar(*i);
		i++;
		count++;
	}
	return (count);
}
