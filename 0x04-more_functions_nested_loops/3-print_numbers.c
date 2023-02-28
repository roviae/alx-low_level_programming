#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers (0 - 9)
 *
 * Return: 0 -9 followed by a new line
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	_putchar(10);
}
