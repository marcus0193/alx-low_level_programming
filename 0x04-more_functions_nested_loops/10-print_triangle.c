#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints triangle of #s as example 
 *
 * @size: input prameter the rows and clos of the triangle sould equal
 *
 * Return: Always 0
*/

void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if ((r + c) <= size)
					_putchar(' ');
				else
					_putchar(32);
			}
			_putchar('\n');
		}
	}
}
