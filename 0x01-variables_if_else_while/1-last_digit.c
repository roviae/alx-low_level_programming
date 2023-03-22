#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random number assignment to variable
 * show if n(random variable) is
 * greater than 5, o or less than 6 and not 0
 *
 * Return: always 0 (success);
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
