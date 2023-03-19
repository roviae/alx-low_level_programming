#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fxn that allocates memory usingmalloc
 * @b: var to store the address
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
