#include "3-calc.h"

/**
 * main - entry point of the whole function
 *
 * @argc: the first parameter
 *
 * @argv: second parameter
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int k, i, j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*argv[2] != '+') &&
	(*argv[2] != '-') &&
	(*argv[2] != '*') &&
	(*argv[2] != '/') &&
	(*argv[2] != '%')) ||
	(strlen(argv[2]) != 1))
	{
		printf("Error\n");
		exit(99);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	k = (*get_op_func(argv[2]))(i, j);
	printf("%d\n", k);
	return (0);
}
