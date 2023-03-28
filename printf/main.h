#ifndef MAIN_H

#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) UNUSED_ ## X __attribute__((unsed))
struct global
{
	char *format;
	int i;
	int j;
	int count;
	va_list args;
	char *str;
} id;

int _printf(const char *format, ...);
int _putchar(char c);
int  _printint(void);
void _printchar(void);
void _printstring(void);
int _printunsigned(void);

#endif
