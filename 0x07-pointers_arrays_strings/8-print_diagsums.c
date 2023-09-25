#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_diagsums - is a function that prints the sum of
 * the two diagonals of a square matrix of integers
 *
 * @a: is the first paramter of the function
 *
 * @size: is the second parameter of the function
*/

void print_diagsums(int *a, int size)
{
	int ar, ar1 = 0, ar2 = 0;

	for (ar = 0; ar < size; ar++)
	{
		ar1 += a[ar]
		ar2 += a[size - ar - 1]
		a += size;
	}
	printf("%d, ", ar1);
	printf("%d\n", ar2);
}
