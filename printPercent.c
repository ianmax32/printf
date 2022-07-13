#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printPercent - Prints a percent sign
 * @s: argument
 */

void printPercent(va_list s)
{
	char a;

	a = va_arg(s, int);
	write(1, &a, 1);
}
