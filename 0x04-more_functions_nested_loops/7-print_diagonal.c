#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line on terminal
 *@n: input taken
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar(10);
		}
	}
}
