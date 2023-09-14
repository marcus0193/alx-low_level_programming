#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints intergers with the use of _putchar
 *                only no array no long data type
 *
 * @n: input prameter of the function
*/

void print_number(int n)
{
	unsigned int y = n;

	if (n < 0)
	{
		_putchar('-');
		y = -y;
	}

	if ((y / 10) > 0)
		print_number(y / 10);

	_putchar((y % 10) + 48);
}
