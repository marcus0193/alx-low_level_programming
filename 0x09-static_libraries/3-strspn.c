#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring
 *
 * @s: is the first parameter
 *
 * @accept: is the second parameter
 *
 * Return: number of bytes of accept on s
*/

char *_strspn(char *s, char *accept)
{
	unsigned int nob, locate;

	for (locate = 0; s[locate] != '\0'; locate++)
	{
		for (nob = 0; accept[nob] != s[locate]; nob++)
		{
			if (accept[nob] == '\0')
				return (locate);
		}
	}

	return (locate);
}
