#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - is a function that prints a string,followed by a new line
 *
 * @s: is the first parameter of the function
 *
 * Return: nothing as a void function
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

}
