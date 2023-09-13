#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print tables n
 *
 * @n: input prameter
 *
 * Description: function that prints the n times table, starting with 0.
*/

void print_times_table(int n)
{
	int i, y, z;

	if (n <= 15 && n >= 0)
	{
		for (z = 0; z <= n; z++)

			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				i = z * y;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');

				if (i >= 100)
				{
					_putchar((i / 10) + 48);
					_putchar((i / 100) % 10 + 48);
				}
				else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
