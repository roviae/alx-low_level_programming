#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - fxn that returns the length of a string
 * @s: string arguement
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
