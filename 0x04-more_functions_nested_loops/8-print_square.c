#include <stdio.h>
#include "main.h"

/**
 * print_square - function that prints square of
 *                #s as example
 *
 * @size: input prameter the rows and clos of the
 *        square sould equal
 *
 * Return: Always 0
*/

void print_square(int size)
{
	int r, c;

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
			_putchar(35);
		_putchar('\n');
	}
}
