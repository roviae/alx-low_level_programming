#include <stdio.h>
#include <unistd.h>
/**
 * main - printing program followed by new line to std error
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
