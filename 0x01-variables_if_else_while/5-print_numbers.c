#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers of base 10 from 0
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; ++n)
		printf("%d", n);
	putchar(10);

	return (0);
}
