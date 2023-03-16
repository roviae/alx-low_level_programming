#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - fxn that splits a string into words
 * @str: string to be split
 *
 * Return: 0
 */
char **strtow(char *str)
{
	int i;

	if (str == NULL || str == "")
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		printf("%s\n", str[i]);
	putchar(10);

	return (str);
}
