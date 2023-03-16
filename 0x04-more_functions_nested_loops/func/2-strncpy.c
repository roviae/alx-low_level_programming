#include "main.h"
#include <string.h>

/**
 * *_strncpy - fxn that copies a string
 * @dest: string copy destination
 * @src: source string to be copied
 * @n: no of bytes of src string to be copied
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
