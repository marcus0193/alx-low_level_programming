#include "main.h"

/**
 * *fullym - inserts the memory with given bytes
 *
 * @x: the first parameter
 *
 * @z: the second parameter
 *
 * @w: the third parameter
 *
 * Return: the w bytes
*/

char *fullym(char *x, char z, unsigned int w)
{
	char *p = x;

	while (w--)
		*x++ = z;

	return (p);
}

/**
 * *_calloc - is a function that allocates memory for an array
 *
 * @nmemb: is the first parameter
 *
 * @size: is the second parameter
 *
 * Return: a pointer to the memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *y;

	if (size == 0 || nmemb == 0)
		return (NULL);
	y = malloc(sizeof(int) * nmemb);

	if (y == 0)
		return (NULL);

	fullym(y, 0, sizeof(int) * nmemb);

	return (y);
}
