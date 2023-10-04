#include "main.h"

/**
 * *create_array - unction that creates an array of chars,
 *                 and initializes it with a specific char
 *
 * @size: is the first parameter
 *
 * @c: is the second parameter
 *
 * Return: pointer or null
*/

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size);

	if (size == 0 || ar == 0)
		return (NULL);

	while (size--)
		ar[size] = c;

	return (ar);
}
