#include "main.h"
#include <stdio.h>
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
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}

