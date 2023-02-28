#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10times the numbers (0 - 14)
 *
 * Return: 0-14 x10 followed by a new line
 */
void more_numbers(void)
{
	int c, count;

	for (count = 0; count <= 9; count++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar(10);
	}
}
