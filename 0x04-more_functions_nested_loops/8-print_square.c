#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size : input taken
 *
 * Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');

			_putchar(10);
		}
	}
}
