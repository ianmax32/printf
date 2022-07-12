#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - function produces output according to format
 * @format:format for which to produce the output
 * Return:0
 */

int _printf(const char *format, ...)
{
	int a;
	int b;
	int counter;
	va_list s;

	ftFunc_t links[] = {
		{'s', printString},
		{'c', printChar}
	};

	if (format == NULL)
		return (0);

	va_start(s, format);
	a = 0;
	counter = 0;

	while (format[a])
	{
		if (format[a] == '%')
		{
			for (b = 0; b < 2; b++)
			{
				if (format[a + 1] != '%' && format[a + 1] == links[b].formatChar)
				{
					links[b].f(s);
					a++;
				}
			}
<<<<<<< HEAD
=======
			a++;
			_putchar(format[a]);
>>>>>>> refs/remotes/origin/master
		}
		else
			_putchar(format[a]);
		a++;
		counter++;
	}

	return (counter);
}
