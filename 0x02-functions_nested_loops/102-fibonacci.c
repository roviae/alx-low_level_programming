#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the first 50 fibonacci numbers
 * start with and 2 followed by a new line
 * comma and space should separte them
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(",  %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		i++;
	}

	putchar(10);
	return (0);
}
