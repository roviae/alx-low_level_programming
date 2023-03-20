#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - define a new type struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
