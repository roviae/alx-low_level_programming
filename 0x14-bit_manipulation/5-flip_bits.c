#include "main.h"

/**
 * flip_bits - count number of bits to flip for number change 2 next
 * @n: num1
 * @m: num2
 *
 * Return: unsigned int value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		count += i & 1;
		i >>= 1;
	}

	return (count);
}
