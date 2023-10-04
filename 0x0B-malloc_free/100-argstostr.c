#include "main.h"

/**
 * _length - function that allocate the length
 *
 * @slen: first parameter
 *
 * Return: length
*/

int _length(char *slen)
{
	int s = 0;

	for (; slen[s] != '\0'; s++)
		;
	return (s);
}

/**
 * *argstostr - function that concatenates all the arguments of your program
 *
 * @ac: is the first parameter
 *
 * @av: is the second parameter
 *
 * Return : pointer or NULL
*/

char *argstostr(int ac, char **av)
{
	int n = 0, first = 0, y = 0, last = 0;
	char *z;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; n < ac; n++, first++)
		first += _length(av[n]);

	z = malloc(sizeof(char) * first + 1);
	if (z == 0)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (y = 0; av[n][y] != '\0'; y++, last++)
			z[last] = av[n][y];

		z[last] = '\n';
		last++;
	}
	z[last] = '\0';
	return (z);
}
