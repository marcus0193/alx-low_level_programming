#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argc: the first parameter
 *
 * @argv: the second parameter
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2 && argc != 1)
	{
	int i, mnoc = 0, cash = atoi(argv[1]);
	int cs[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= cs[i])
			{
				mnoc += cash / cs[i];
				cash = cash % cs[i];
				if (cash % cs[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mnoc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
