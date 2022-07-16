#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int a;
	/*int b;
	int counter;*/
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
	a = 0;
	
	while (*format != '\0')
	{
		while (*format != '%')
		{
			_putchar(*format);
			a++;
			format++;
		}

		format++;

		switch (*format)
		{
			case 'c' : a += links[1].f(s);
				break;
			case 'd' : a += links[2].f(s);;
				break;

			case 's' : a += links[0].f(s);;
				break;
			case 'i' : a += links[3].f(s);;
				break;
		}
		format++;
	}

	va_end(s);
	return (a);
}
