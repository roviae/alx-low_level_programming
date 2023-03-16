#include "main.h"
#include <string.h>

/**
 * _strspn - fxn that gets the length of a prefix substring
 * @s: initial string to be compared to
 * @accept: values to be compared to string s
 *
 * Return: no of bytes in initial s segment in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
