#include "main.h"
#include <string.h>

/**
 * _strstr - fxn that locates a substring
 * @haystack: string to be compared to
 * @needle: subset to be compared to haystack
 *
 * Return: pointer to beginning of located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
