#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of two digits
 * the two digits must be different 01 and 10 are same
 * only the smallest combination
 * print in ascending order
 * use putchar only five times max
 * not allowed to use any var of type char
 * all code in main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			if (n != m)
			{
				putchar(m);
				putchar(n);

				if (m == '8' && n == '9')
					continue;
				putchar(44);
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
