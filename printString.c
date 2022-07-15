#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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
		write(1, i, 1);
		i++;
		count++;
	}
	return (count);
}
