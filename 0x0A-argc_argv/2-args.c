#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: the first parameter
 *
 * @argv: the second parameter
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
