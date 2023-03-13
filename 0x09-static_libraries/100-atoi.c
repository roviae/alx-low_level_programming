#include "main.h"
#include <stdlib.h>

/**
 * _atoi - fxn that convert a string to an integer
 *
 * @s: string to be converted
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] == '+') || (s[i] == '-') || (s[i] == 'Aa - Zz'))
				{
				putchar (atoi(s));
				}
		putchar(10);

		return (0);
	}
}