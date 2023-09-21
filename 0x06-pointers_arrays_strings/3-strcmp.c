#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - is a function that compares two strings
 *
 * @s1: is the first parameter of the function
 *
 * @s2: is the second parameter of the functon
 *
 * Return: the result of the comparation
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			res = ((int)*s1-48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (res);
}
