#include <stdio.h>
#include "main.h"

/**
 * swap_int - is a function that swaps the values of to number.
 *
 * @*a: is the first parameter of the function
 *
 * @*b: is the second parameter of the function
*/

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
