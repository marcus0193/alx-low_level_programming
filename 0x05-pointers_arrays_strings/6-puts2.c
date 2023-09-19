#include <stdio.h>
#include "main.h"

/**
 * puts2 - is a function that prints every other character of a string,
 *         starting with the first character, followed by a new line.
 *
 * @str: is the parameter of the function
*/

void puts2(char *str)
{
	int ev;

	for (ev = 0; str[ev] != '\0'; en++)
	{
		if (ev % 2 == 0)
			_putchar(str[ev]);
	}
	_putchar('\n');
}
