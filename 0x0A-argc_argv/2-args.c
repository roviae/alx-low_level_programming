#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguements it receives
 * @argc: arg count
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
