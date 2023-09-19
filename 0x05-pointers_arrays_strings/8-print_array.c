#include <stdio.h>
#include "main.h"

/**
 * print_array - is a function that prints n elements of an array
 *               of integers, followed by a new line.
 *
 * @a: is the first parameter of the function
 *
 * @n is a the second parameter of the function
*/

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (e != (n - 1))
			printf("%d, ", a[e]);
		else
			printf("%d", a[e]);
	}
	printf("\n");
}
