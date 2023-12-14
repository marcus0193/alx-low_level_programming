#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: is the function parameter
 *
 * Return: nothing as void function
 */

void print_binary(unsigned long int n)
{
	int p = sizeof(n) * 8, print = 0;

	while (p)
	{
		if (n & 1l << --p)
		{
			_putchar('1');
			print++;
		}
		else if (print)
			_putchar('0');
	}
	if (!print)
		_putchar('0');
}
