#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - fxn that return string length
 * @s: string len to be returned
 *
 * Return:0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
