#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: is the first parameter
 *
 * @max: is the second parameter
 *
 * Return: pointer to the new array or NULL
*/

int *array_range(int min, int max)
{
	int last, y;
	int *p;

	if (min > max)
		return (NULL);
	last = max - min + 1;
	p = malloc(sizeof(int) * last);

	if (p == 0 || p == NULL)
		return (NULL);
	for (y = 0; y < last; y++)
		p[y] = min++;
	return (p);
}
