#include "main.h"

/**
 * _abs - fxn that computes the absolute value of an integer
 *@num: fxn arguement
 * Return: 0 Always
 */
int _abs(int num)
{
	if (num < 0)
	{
		int abs_val;

		abs_val = num * -1;

		return (abs_val);
	}

	return (num);

	return (0);
}
