#include <stdio.h>
#include "main.h"

/**
 * times_table - print tables
 *
 * Description:  function that prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int i, y, z;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			z = i * y;
			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + 48);

			_putchar((z % 10) + 48);
		}
		_putchar('\n');
	}
}
