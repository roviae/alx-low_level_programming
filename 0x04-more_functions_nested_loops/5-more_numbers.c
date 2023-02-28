#include "main.h"
#include <stdio.h>

/*
more_numbers - function that prints 10times the numbers (0 - 14)
Return : 0
*/
void more_numbers(void)
{
    long c; 
    int count;
    c = 0;
    count = 0;

    while (count <= '9')
    {
        for (c = '0'; c <= '14'; c++)
        {
            _putchar(c);
        }
        count++;
    }

}