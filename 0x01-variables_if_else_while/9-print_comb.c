#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible combos of single digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
