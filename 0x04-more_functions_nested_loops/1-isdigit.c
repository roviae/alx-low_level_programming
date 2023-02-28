#include "main.h"
#include <stdio.h>

/*
_isdigit - function that checks for a digit
Return: 1 if digit otherwise 0 */

int _isdigit(int c)
{
    c = 0;

    if (c <= 9)
    {
        putchar(c);

        c++;
        return (1);
    }
    return (0);
    
}