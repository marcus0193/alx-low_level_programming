#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncat - is a function that concatenates two strings
 *
 * @dest: is the first pararmeter of the function
 *
 * @src: is the second parameter of the function
 *
 * @n: is the third parameter of the function
 *
 * Return: the pointer to the resulting sting on dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int s, r;

	s = 0;

	while (dest[s])
		s++;

	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[s + r] = src[r];

	dest[s + r] = '\0';

	return (dest);
}
