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
	int m, count_ones = 0;
	unsigned long int new_value;

	for (m = 63; m >= 0; m--)
	{
		new_value = n >> m;

		if (new_value & 1)
		{
			_putchar('1');
			count_ones++;
		}
		else if (count_ones)
			_putchar('0');
	}

	if (!count_ones)
		_putchar('0');
}
