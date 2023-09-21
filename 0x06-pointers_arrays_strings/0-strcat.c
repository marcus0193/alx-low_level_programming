#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - is a function that concatenates two strings
 *
 * @dest: is the first pararmeter of the function
 *
 * @src: is the second parameter of the function
 *
 * Return: the pointer to the resulting sting on dest
*/

char *_strcat(char *dest, char *src)
{
	int s, r;

	s = 0;

	while (dest[s])
		s++;

	for (r = 0; src[r]; r++)
		dest[s++] = src[r];

	return (dest);
}
