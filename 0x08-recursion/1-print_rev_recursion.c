#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - is a function that prints a string in reverse.
 *
 * @s: is the first parameter of the function
 *
 * Return: nothing as a void function
*/

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		 _print_rev_recursion(s + 1);
		 _putchar(*s);
	}

}
