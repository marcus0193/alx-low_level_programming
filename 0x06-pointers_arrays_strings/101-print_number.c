#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: function parameter
 *
 * Return: Always 0
*/

void print_number(int n)
{
	unsigned int i;

	i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48)
}
