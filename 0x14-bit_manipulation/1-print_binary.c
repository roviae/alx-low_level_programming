#include "main.h"
#include <stdlib.h>

/**
 * print_binary - fxn that prints the binary rep of a number
 * @n: number to be represented in binary
 *
 * Return: nothing since its a void return fxn
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (max)
	{
		if (mask == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			mask = 1;
		}
		max >>= 1;
	}
}
