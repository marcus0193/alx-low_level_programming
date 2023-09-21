#include "main.h"

/**
 * *rot13 - is a function that encodes a string using rot13
 *
 * @c: is the function parameter
 *
 * Return: the encoded string
*/

char *rot13(char *c)
{
	int i;

	char *po = c;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHILKLM";

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == rot13[i])
			{
				*c = ROT13[i];
				break;

			}
		}
		c++
	}
	return (po);
}
