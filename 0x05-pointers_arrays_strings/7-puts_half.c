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
	int len, half, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	half = len / 2;

	for (i = half; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
