#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * lower - is a function to determine lowercase
 *
 * @s: is the function parameter
 *
 * Return: 1 if it is and 0 if not
*/

int lower(char s)
{
	return (c >= 97 && c <= 122);
}

/**
 * dels - is a function to determine delimiters
 *
 * @x: is the function parameter
 *
 * Return: 1 if it is and 0 if not
*/

int dels(char x)
{
	int i;
	char des[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (x == des[i])
			return (1);
	return (0);
}

/**
 * *cap_string - is a function that capitalizes all words of a string.
 *
 * @s: is the function parameter
 *
 * Return: the capitalized string
*/

char *cap_string(char *)
{
	char s;
	char *po = s;
	int ifdes = 1;

	while (*s)
	{
		if (dels(*s))
			ifdes = 1;
		else if (lower(*s) && ifdes)
		{
			*s -= 32;
			ifdes = 0;
		}
		else
			ifdes = 0;
		s++;
	}
	return (po);
}
