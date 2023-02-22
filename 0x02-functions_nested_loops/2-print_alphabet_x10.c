#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(10);
		n++;
	}
}
