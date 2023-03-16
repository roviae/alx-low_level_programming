#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - fxn that locates a character in a string
 * @s: string in which char is found and pointed to
 * @c: character to be located
 *
 * Return: pointer to the 1st occurence of char c in str s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
