#include "main.h"

/**
 * swap_int - fxn that swaps the values of two integers
 * @a: input one
 * @b: input two
 *
 * Return : 0 Always
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
