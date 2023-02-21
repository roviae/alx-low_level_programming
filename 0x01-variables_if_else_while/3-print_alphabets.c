#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 97; n < 123; ++n)
		putchar(n);
	for (n = 65; n < 91; ++n)
		putchar(n);
	putchar(10);

	return (0);
}
