#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 *
 * @s: is the first parameter
 *
 * @b: is the second parameter
 *
 * @n: is the third parameter
 *
 * Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cb;

	for (cb = 0; n > 0; cb++, n--)
	{
		s[cb] = b;
	}

	return (s);
}
