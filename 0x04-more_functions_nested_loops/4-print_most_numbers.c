#include "main.h"
#include <stdio.h>

/*
print_most_numbers - function that prints numbers (0 - 9)
Do not print 2 & 4
Return: 0
*/
void print_most_numbers(void)
{
    int c = 0;
    
    while (c <= '9')
    {
        if (c != '2' && c != '4')
        {
            _putchar(c);

        }
        
        c++;
    }
    _putchar(10);

}

