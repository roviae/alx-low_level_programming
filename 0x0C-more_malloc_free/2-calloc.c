#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - fxn that allocates memory fo an array
 * using malloc
 * @nmemb: size of nmemb
 * @size: size_t
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
