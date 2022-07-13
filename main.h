#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct formatToFunc
{
	char formatChar;
	int (*f)();
} ftFunc_t;

int _putchar(char s);
int printString(va_list s);
int printChar(va_list s);
int printDec(va_list s);
int _printf(const char *format, ...);

#endif /*MAIN_H*/
