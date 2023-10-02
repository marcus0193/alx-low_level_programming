#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - is a function that copies memory area
 *
 * @dest: is the first parameter
 *
 * @src: is the second parameter
 *
 * @n: is the third parameter
 *
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cp;

	for (cp = 0; cp < n; cp++)
	{
		dest[cp] = src[cp];
	}

	return (dest);
}
