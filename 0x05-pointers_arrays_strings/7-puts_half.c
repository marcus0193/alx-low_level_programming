#include <stdio.h>
#include "main.h"

/**
 * puts_half - is a function that prints half of a string,
 *             followed by a new line.
 *
 * @str: is the function parameter
*/

void puts_half(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
		;
	h++;
	for (h /= 2; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
