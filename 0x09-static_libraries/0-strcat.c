#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * *_strcat - fxn that concatenates two strings
 * @dest: string to be concat to
 * @src: string to be cancat to dest
 *
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
