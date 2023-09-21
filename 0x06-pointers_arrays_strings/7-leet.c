#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *leet - is a function that encodes a string into 1337.
 *
 * @c: is the function parameter
 *
 * Return: the encoded string
*/

char *leet(char *)
{
	char c;
	char *po = c;
	char let[] = {'A', 'E', 'O', 'T','L'};
	int enco[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(let) / sizeof(char); i++)
		{
			if (*c == let[i] || *c == let[i] + 32)
			{
				*c = 48 + enco[i];
			}
		}
		c++
	}
	return (po);
}
