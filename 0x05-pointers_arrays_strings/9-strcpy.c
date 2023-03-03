#include "main.h"
#include <string.h>
/**
 * *_strcpy - fxn that copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed to by dest
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
