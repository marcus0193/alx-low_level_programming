#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: is the first parameter
 *
 * @argv: is the second parameter
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
