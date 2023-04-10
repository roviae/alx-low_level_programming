#include "main.h"

/**
 * clear_bit - fxn that sets the value of a bit at index to 0
 * @n: pointer to binary num value to be changed to 0
 * @index: index of bit value to be set to 0
 *
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * (8 - 1)))
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
