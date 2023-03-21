#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - fxn that prints a struct dog
 * @d: username for struct dog
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("%s\n", "nil");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
		printf("%s\n", "nil");
	else
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("%s\n", "nil");
	else
		printf("Owner: %s\n", d->owner);
}
