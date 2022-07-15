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
		{'c', printChar},
		{'d', printDec},
		{'i', printDec}
	};

	if (format == NULL)
		return (0);
	va_start(s, format);
	counter = 0;
	for (a = 0; format[a] != '\0';  a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; b < 4; b++)
			{
				if (format[a + 1] == links[b].formatChar)
				{
					counter += links[b].f(s);
					if (format[a + 1] == 's' || format[a + 1] == 'c')
						counter--;
					if (format[a + 1] == 'i' || format[a + 1] == 'd')
						counter++;
					a += 2;
				}
				if (format[a + 1] == '%')
				{
					a++;
					counter--;
				}
			}
			counter += _putchar(format[a]);
		}
		else
			counter += _putchar(format[a]);
	}
	va_end(s);
	return (counter);
}
