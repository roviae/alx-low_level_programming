#include "main.h"

/**
 * reverse_array - fxn that reverses the content of 
 * an array of integers
 * @a: array of integers
 * @n: no of elements in array
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n -1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
