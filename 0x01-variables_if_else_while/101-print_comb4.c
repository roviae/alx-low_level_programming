#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible different combinations of three digi
 * ts
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, p;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n < '9'; n++)
		{
			for (p = '0'; p < '9'; p++)
			{
				if ((m != n) != p)
				{
					putchar(m);
					putchar(n);
					putchar(p);

					if (m == '7' && n == '8')
						continue;
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
