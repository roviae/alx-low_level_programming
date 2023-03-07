#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * string_toupper - fxn that changes lowercase letters
 * of a string to uppercase
 * @s: character
 *
 * Return:0
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		s++;
	}
	return (start);
}
