#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 *            in memory, which contains a copy of the string given as.
 *
 * @str: the first parameter
 *
 * Return: always 0
*/

char *_strdup(char *str)
{
	int t;
	int memory = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (; str[memory] != '\0'; memory++)
		;

	dup = malloc(memory * sizeof(*str) + 1);

	if (dup == 0)
	{
		return (NULL);
	}
	else
	{
		for (; t < memory; t++)
			dup[t] = str[t];
	}
	return (dup);
}
