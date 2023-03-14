#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: arg count
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul, i = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", mul);
	}
	return (0);
}
