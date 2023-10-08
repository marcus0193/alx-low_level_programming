#include "main.h"

/**
 * *string_nconcat - is a function that concatenates two strings.
 *
 * @s1: is the first parameter
 *
 * @s2: is the second parameter
 *
 * @n: is the third parameter
 *
 * Return: pointer to the new string memory or NULL.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int z = 0, y, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
		;
	x = malloc(len_s1 + z + 1);

	if (x == NULL)
	{
		return (NULL);
	}
	for (z = 0; s1[z] != '\0'; z++)
		x[z] = s1[z];
	for (y = 0; y < n; y++)
	{
		x[z] = s2[y];
		z++;
	}
	x[z] = '\0';
	return (x);
}
