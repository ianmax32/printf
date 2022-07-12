#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char s);
void printString(va_list s);
void printChar(va_list s);
int _printf(const char *format, ...);

typedef struct formatToFunc
{
	char formatChar;
	void (*f)();
} ftFunc_t;

#endif /*MAIN_H*/
