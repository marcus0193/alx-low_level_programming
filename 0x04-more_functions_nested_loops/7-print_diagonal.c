#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that drows diagonal usesing spaces
 *
 * Description: using for loop with if and olny _putchar
 *
 * @n: input prameter declare the time should / be printed
 *     and if its 0 the function prints a new line
*/

void print_diagonal(int n)
{
	int y, z;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 1; y <= n; y++)
		{
			for (z = 1; z <= y; z++)
				_putchar(' ');
			_putchar('/');
			_putchar('\n');
		}
	}
}
