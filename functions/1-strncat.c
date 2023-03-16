#include "main.h"
#include <string.h>

/**
 * *_strncat - fxn that concatenates two strings
 * will use at most n bytes from src
 * src does not need to be null terminated if it contains n or
 * more bytes
 * @dest: destination string
 * @src: source string
 * @n: no of bytes to be used from src
 *
 * Return: 0 Always
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
