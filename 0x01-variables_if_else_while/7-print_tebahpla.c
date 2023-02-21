#include <stdio.h>
#include <stdlib.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar(10);

	return (0);
}
