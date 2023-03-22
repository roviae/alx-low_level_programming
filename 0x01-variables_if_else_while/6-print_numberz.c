#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers of base 10
 * only use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar(10);

	return (0);
}
