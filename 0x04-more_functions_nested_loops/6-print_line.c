#include <stdio.h>
#include "main.h"

/**
 * print_line - function that prints underlines as equal to n
 *
 * @n: input prameter of the function
 *     declare the time should _ be printed
*/

void print_line(int n)
{
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 1; y <= n; y++)
			_putchar(95);
		_putchar('\n');
	}
}
