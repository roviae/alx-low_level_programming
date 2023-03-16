#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - fxn that concatenates two strings
 * @s1: dest string
 * @s2: source string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
		++s1;
		i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*s1 = *s2;
		s1++;
		s2++;
		j++;
	}
	printf("%s\n", s1);

	return (0);
}
