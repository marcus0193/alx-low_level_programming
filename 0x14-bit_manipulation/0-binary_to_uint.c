#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to the string
 *
 * Return: the unsigned int or 0 if null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}
	return (n);
}
