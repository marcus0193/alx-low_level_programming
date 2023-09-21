#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - is a function that reverses the content of an array of integers
 *
 * @a: is the first parameter of the function
 *
 * @n: is the second parameter of the function
*/

void reverse_array(int *a, int n)
{
	int f, s, t;

	for (f = 0, s = (n - 1); f < s; f++, s--)
	{
		t = a[f];
		a[f] = a[s];
		a[s] = t;
	}
}
