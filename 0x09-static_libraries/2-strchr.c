#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - is a function that locates a character in a string
 *
 * @s: is the first parameter
 *
 * @c: is the second parameter
 *
 * Return: pointer to the c in s or null if not there
*/

char *_strchr(char *s, char c)
{
	int locate;

	for (locate = 0; s[locate] >= '\0'; locate++)
	{
		if (s[locate] == c)
		{
			return (s + locate);
		}
	}

	return ('\0');
}
