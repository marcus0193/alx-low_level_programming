#include <stdio.h>
#include "main.h"

/**
 * _puts - is a function that prints a string, followed
 *         by a new line, to stdout
 *
 * @*str: is the address of the function parameter
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++
	}
	_putchar('\n');
}
