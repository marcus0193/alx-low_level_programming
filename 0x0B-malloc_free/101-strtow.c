#include "main.h"

/**
 * word - detects words
 *
 * @w: is the function parameter
 *
 * Return: w of words
*/

int word(char *w)
{
	int n, y = 0;

	for (n = 0; w[n]; n++)
	{
		if (w[n] == ' ')
		{
		if (w[n + 1] != ' ' && w[n + 1] != '\0')
			y++;
		}
		else if (n == 0)
			y++;
	}
	y++;
	return (y);
}

/**
 * **strtow - function that splits a string into words.
 *
 * @str: the function parameter
 *
 * Return: pointer to an array of word or null
*/

char **strtow(char *str)
{
	int n, y, z, x, q = 0, len = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	q = word(str);
	if (q == 1)
		return (NULL);
	s = (char **)malloc(n * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[q - 1] = NULL;
	n = 0;
	while (str [n])
	{
		if (str [n] != ' ' && (n == 0 || str [n - 1] == ' '))
		{
			for (y = 1; str[n + y] != ' ' && str [n + y]; y++)
				;
			y++;
			s[len] = (char *)malloc(y * sizeof(char));
			y++;
			if (s[len] == NULL)
			{
				for (z = 0; z < len; z++)
					free(s[z]);
				free(s[q - 1]);
				free(s);
				return (NULL);
			}
			for (x = 0; x < y; x++)
				s[len][x] = str [n + x];
			s[len][x] = '\0';
			len++;
			n += y;
		}
		else
			n++;
	}
	return (s);
}
