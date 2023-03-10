#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
/**
 * cap_string - fxn that capitalizes all string words
 * @cap: fxn parameter
 *
 * Return: 0
 */
char *cap_string(char *cap)
{
	int i = 0;

	while (cap[i])
	{
		if (i == 0 && (cap[i] >= 'a' && cap[i] <= 'z'))
			cap[i] -= 32;

		if (check_separators(cap[i]) && (cap[i + 1] >= 'a' && cap[i + 1] <= 'z'))
			cap[i + 1] -= 32;
		i++;
	}

	return (s);
}
/**
 * check_separators - separators of words, space, tabulation and newline
 * @c: input character
 *
 * Return: 1 if separator, 0 otherwise
 */
int check_separators(char c)
{
	int i = 0;

	char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!',
	'?', "", '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
