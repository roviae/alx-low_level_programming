#include "main.h"
#include <string.h>

/**
 * _memset - fxn that fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte that fill memory area
 * @n: no of first byte in memory area to be filled
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(char));

	return (s);
}
