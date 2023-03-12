#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - fxn that returns the natural sqrt
 * of a number
 * @n: number whose sqrt is to be returned
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	_putchar(sqrt(n));

	if (sqrt(n) == NaN)
		return (-1);
}
