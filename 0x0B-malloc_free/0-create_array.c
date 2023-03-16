#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - fxn that creates an array of characters
 * and initializes it with a specific char
 * @size: size of array
 * @c: initializing char
 *
 * Return: pointer to array or Null if fail
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
