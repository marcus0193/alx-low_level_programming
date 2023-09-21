#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - is a function that copies a string.
 *
 * @dest: is the first pararmeter of the function
 *
 * @src: is the second parameter of the function
 *
 *  @n: is the third parammeter of the function
 *
 * Return: the pointer to the resulting sting on dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int s;


	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];

	while (s < n)
	{
		dest[s] = '\0';
		s++;
	}

	return (dest);
}
