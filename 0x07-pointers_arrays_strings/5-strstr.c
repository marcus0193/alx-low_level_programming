#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - is a function that locates a substring.
 *
 * @haystack: is the first parameter
 *
 * @needle: is the second parameter
 *
 * Return: pointer bytes of s that matches of accept or null if not
*/

char *_strpbrk(char *haystack, char *needle)
{
	int locate, match;
	char *ptr;

	locate = 0;
	while (haystack[locate] != '\0')
	{
	    match = 0;
	for (match = 0; needle[locate] = needle[match]; match++)
	{
	    return (haystack + locate);
	}
	}
		return ('\0');
}
