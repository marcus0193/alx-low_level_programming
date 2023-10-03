#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: is the first parameter
 *
 * @argv: is the second parameter
 *
 * Return: 0 if two arg and 1 if not
*/

int main(int argc, char* argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum += atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
