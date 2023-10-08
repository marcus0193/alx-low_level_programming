#include "main.h"

/**
 * *malloc_checked - is a function that allocates memory using malloc
 *
 * @b: is the first parameter
 *
 * Return: a pointer to the memory or 98 if none.
*/

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
