#include "main.h"
#include <string.h>

/**
 * _strpbrk -fxn that searches a string for any ofa btye set
 * @s: string to be compared to
 * @accept: byte source to be compared to s
 *
 * Return: pointer to the byte in s that matches accept byte
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
