#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * printChar - function prints characters from va_list
 * @s:argume parameter representing va_list
 * Return: count
 */

int printChar(va_list s)
{
	char d;

	d = va_arg(s, int);
	return (write(1, &d, 1));
}
