#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	char *temp;
	unsigned int i;
	char *s;

	va_list arg;
	va_list(arg, format);

	for (temp = format; *temp != '\0'; temp++)
	{
		while (*temp != '%')
		{
			putchar(*temp);
			temp++;
		}

		temp++;

		switch (*temp)
		{
			case 'c' : i = va_arg(arg, int);
				   putchar(i);
				   break;

			case 'd' : i = va_arg(arg, int);
				   if (i < 0)
				   {
					   i = -i;
					   putchar('-');
				   }
				   puts(convert(i, 10));
				   break;

			case 's' : s = va_arg(arg, char *);
				   puts(s);
				   break;

			case 'i' : i = va_arg(arg, int);
				   if (i < 0)
				   {
					   i = -i;
					   putchar('-');
				   }
				   puts(convert(i, 10));
				   break;
		}
	}
	va_end(arg);
	return (temp);
}
