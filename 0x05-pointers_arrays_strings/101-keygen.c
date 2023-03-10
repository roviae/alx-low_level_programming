#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0
 */
int main(void)
{
	srand(time(NULL) * getpid());

	int passwords = rand();

	putchar(passwords);
}
