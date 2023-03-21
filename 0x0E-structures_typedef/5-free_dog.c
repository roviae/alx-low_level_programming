#include "dog.h"
#include <stdio.h>

/**
 * free_dog - fxn that frees dogs
 * @dog_t: dog to be freed
 * @d: dog to be freed
 *
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
