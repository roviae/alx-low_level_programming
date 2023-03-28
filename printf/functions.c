#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printint - printf int specifiers
 * @global: arguements taken
 *
 * Return: int
 */
int _printint(void)
{
	long int n = va_arg(id.args, long int);
	unsigned long int num;

	if (n < 0)
	{
		putchar('-');
		num = (unsigned long int)((-1) * n);
	}
	else if (n > 0)
	{
		num = (unsigned long int)n;
	}
	else
		num = 0;

	return (num);
}

/**
 * _printunsigned - printf unsigned decimal num
 * @global: arguement list in global struct
 *
 * Return: int
 */
int _printunsigned(void)
{
	unsigned long int num = va_arg(id.args, unsigned long int);

	if (num == 0)
		num = 0;

	if (num > 0)
		{
			putchar(num);
		}

	return (num);
}
