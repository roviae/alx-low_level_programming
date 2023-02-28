#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -print numbers 1 to 100
 * for multiples of 3 print fizz
 * for multiples of 5 print Buzz
 * for multiples of both print Fixxbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			putchar(' ');
	}
	putchar(10);
	return (0);
}
