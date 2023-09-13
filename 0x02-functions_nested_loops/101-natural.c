#include <stdio.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Description: list all the natural numbers below 10 that
 *              are multiples of 3 or 5, we get 3, 5, 6 and 9
 *
 * Return: Always 0
*/

int main(void)
{
	int i, y;

	for (y = 0; y < 1024; y++)
	{
		if (y % 3 == 0 || y % 5 == 0)
			i += y;
	}
	printf("%d\n", i);

	return (0);
}
