#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 *
 * @argc: is the first parameter
 *
 * @argv: is the second parameter
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
			if (*i < '0' || *i > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
