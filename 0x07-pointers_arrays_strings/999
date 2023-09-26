#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - is a function that searches a string for any of a set of bytes.
 *
 * @s: is the first parameter
 *
 * @accept: is the second parameter
 *
 * Return: pointer bytes of s that matches of accept or null if not
*/

char *_strpbrk(char *s, char *accept)
{
	int locate, match;
	char *ptr;

	locate = 0;
	while (s[locate] != '\0')
	{
		match = 0;
		while (accept[match] != '\0')
		{
			if (accept[match] == s[locate])
			{
				ptr = &s[locate];
					return (ptr);
			}
			match++;
		}
		locate++
	}

		return (0);

}
