#include <stdio.h>
#include "main.h"

/**
 * rev_string - is a function that reverses a string.
 *
 * @*s: is the address of the function parameter
*/

void rev_string(char *s)
{
	int len, b;
	char str;

	for (len = 0; s[len] != '\0'; ++len)
		;
	for (b = 0; b < 1 / 2; b++)
	{
		str = s[b];
		s[b] = s[len - 1 - b];
		s[len - 1 - b] = str;
	}
}
