#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws straight line in terminal
 * @n: input
 * Return: 0
 */
void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (line = 0; line < n; line++)
			_putchar('_');
		_putchar(10);
	}
}
