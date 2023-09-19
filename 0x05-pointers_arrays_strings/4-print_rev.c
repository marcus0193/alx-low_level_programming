#include <stdio.h>
#include "main.h"

/**
 * print_rev - is a function that prints a string,
 *             in reverse, followed by a new line.
 *
 * @*s: is the address of the function parameter
*/

void print_rev(char *s)
{
	int rev = 0;

	while (s[rev])
		rev++;

	while (rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
