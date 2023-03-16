#include "main.h"
#include <string.h>

/**
 * _memcpy - fxn that copies memory area
 * @dest: destination of copied area
 * @src: source of copied area
 * @n: size of area to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n * sizeof(char));

	return (dest);
}
