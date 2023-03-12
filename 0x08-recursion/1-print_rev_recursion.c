#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - fxn that prints a string inreverse
 * @s: string to be reversed
 *
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	int i, length;

	length = strlen(s);

	for (i = length; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
}
