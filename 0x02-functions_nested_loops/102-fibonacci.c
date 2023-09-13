#include <stdio.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Description: program that prints the first 50 Fibonacci numbers,
 *              starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;

		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
