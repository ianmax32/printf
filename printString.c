#include "main.h"
#include <stdarg.h>
/**
 * printString - function prints string from a va_list
 * @s:argument parameter
 * Return:0
 */

void printString(va_list s)
{
	char *i;

	i = va_arg(s, char *);

	while (*i != '\0')
	{
		_putchar(*i);
		i++;
	}
}
