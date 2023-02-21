#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of two two-digit number
 * numbers range from 0 to 99
 * 1 should be printed as 01
 * print innacsending order and commas be used
 * no char type use
 * putchar use only max 8 times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			putchar(44);
			putchar(' ');
		}
	}
	putchar(10);

	return (0);
}
