#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - fxn that returns a pointer to a newly
 * allocated space in memory
 * @str:string to be duplicated
 *
 * Return:0
 */
char *_strdup(char *str)
{
	char *s;

	s = strdup(str);
	while (str == NULL)
		return (NULL);

	return (s);
}
