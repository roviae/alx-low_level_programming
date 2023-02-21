#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers of base 16 in lowercase
 * only use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char lower;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar(10);

	return (0);
}
