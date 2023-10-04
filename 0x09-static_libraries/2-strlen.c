#include <stdio.h>
#include "main.h"

/**
 * _strlen - is a function that returns the length of a string.
 *
 * @s: is the input parameter of the function
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		++len;

	return (len);
}
