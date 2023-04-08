#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - fxn that converts binary number to unsigned int
 * @b: pointer to string containing 0 and 1 binary characters
 *
 * Return: converted number or 0 if b is null or has chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		decimal = decimal * 2 + (*b - '0');
		b++;
	}

	return (decimal);
}
