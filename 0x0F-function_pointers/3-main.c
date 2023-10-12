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
	int (*k)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	k = get_op_func(argv[2]);
	if (!k)
		printf("Error\n"), exit(99);
	if (argv[3] == 0 && argv[2] == '/' || argv[2] == '%')
		printf("Error\n"), exit(100);
	printf("%d\n", k(a, b));
	return (0);
}
