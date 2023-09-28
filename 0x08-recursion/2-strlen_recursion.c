#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - is a function that returns the length of a string.
 *
 * @s: is the first parameter of the function
 *
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
    int len = 0;

    if (*s > '\0')
        len += _strlen_recursion(s + 1) + 1;
    
return (len);
}