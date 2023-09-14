#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - fuction that print 0 -9 except 2 and 4
 *
 * Description: use _putchar twice only
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
