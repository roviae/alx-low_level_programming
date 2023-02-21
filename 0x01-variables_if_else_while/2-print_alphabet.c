#include <stdio.h>

/**
 * main - print alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;
	for (n = 97; n < 123; n++)
		putchar(n);
	putchar(10);

	return (0);
}
