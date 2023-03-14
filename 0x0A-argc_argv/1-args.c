#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the no of args passed into it
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", i - 1);

	return (0);
}
