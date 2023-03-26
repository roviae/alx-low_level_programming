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
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
