#include "main.h"

/**
 * *_realloc - is  a function that reallocates a memory block
 *
 * @ptr: is the first parameter
 *
 * @old_size: is the second parameter
 *
 * @new_size: is the third parameter
 *
 * Return: the new pointer or null.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *po;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		po = malloc(new_size);
		if (po == NULL)
			return (NULL);
		return (po);
	}
	if (new_size > old_size)
	{
		po = malloc(new_size);
		if (po == NULL)
			return (NULL);
		for (n = 0; n < old_size && n < new_size; n++)
			*((char *)po + n) = *((char *)ptr + n);
		free(ptr);
	}
	return (po);
}
