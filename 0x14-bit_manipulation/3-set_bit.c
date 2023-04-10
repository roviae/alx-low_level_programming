#include "main.h"
#include <stdlib.h>

/**
 * set_bit - fxn that sets the value of a bit to 1 at a given index
 * @n: pointer to binary number given
 * @index: index of bit to set to 1
 *
 * Return: 1 if success, -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * (8 - 1)))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
