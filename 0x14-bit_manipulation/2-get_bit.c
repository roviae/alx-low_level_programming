#include "main.h"
#include <stdlib.h>

/**
 * get_bit - fxn that returns the value of a bit at a given index
 * @n:num to be converted to binary before print index value
 * @index: index of value to be printed
 *
 * Return: value of bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	
	return (bit_value);
}
