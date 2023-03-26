#include "main.h"
#include <stdio.h>
/**
 * puts2 - fxn that prints every other char of a string
 * starting with the first char
 * followed by a new line
 * @str: string arg
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
