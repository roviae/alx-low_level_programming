#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers (0 - 9)
 *
 * Return: 0-9 excluding 2 & 4, followed by a new line
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if ((c == 2) || (c == 4))
			continue;
		else
			_putchar(c + '0');
	}
	_putchar(10);
}
