#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - function prints characters to the console
 * @s:character to be printed
 * Return:0
 */

int _putchar(char s)
{
	return (write(1, &s, 1));
}
