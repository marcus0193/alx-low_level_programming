#include "main.h"

/**
 * _length - to alcote the length of the string
 *
 * @str: is the first parameter
 *
 * Return: length
*/

int _length(char *str)
{
	int length = 0;

	for (; str[length] != '\0'; length++)
		;
	return (length);
}

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: is the first parameter
 *
 * @s2: is the second parameter
 *
 * Return: pointer, NULL or 0
*/

char *str_concat(char *s1, char *s2)
{
	int sl1, sl2, n;
	char *allo;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sl1 = _length(s1);
	sl2 = _length(s2);
	allo = malloc((sl1 + sl2) * sizeof(char) + 1);

	if (allo == 0)
		return (NULL);

	for (n = 0; n <= sl1 + sl2; n++)
	{
		if (n < sl1)
			allo[n] = s1[n];
		else
			allo[n] = s2[n - sl1];
	}
	allo[n] = '\0';
	return (allo);
}
