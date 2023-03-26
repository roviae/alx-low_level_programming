#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - fxn that prints half of a string
 * @str: string arg
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i, h;

	i = h = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	if (i % 2 == 0)
		i /= 2;
	else
	{
		h = (i - 1) / 2;
		i -= h;
	}
	while (*(str + i) != 0)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
