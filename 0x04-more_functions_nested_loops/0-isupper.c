#include "main.h"
#include <stdio.h>

/*
main - function that checks for uppercase
Return: 0
*/
int _isupper(int c)
{
    c = 65;
    if (c <= 90)
    {
        putchar(c);

        c++;
    }

    return (1);
}