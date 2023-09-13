#include <stdio.h>
#include "main.h"

/**
 * _length - is a function to find length of number
 *
 * @n: input prarmerter of the function
 *
 * Description: function that return the lengh of given number on n
 *
 * Return: Always 0
*/

int _length(int n)
{
	int y = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		y += 1
	}
	return (y);
}

/**
 * main - the main of first 98 Fibonacci program
 *
 * Description: A C program that finds and prints the first 98 Fibonacci
 *              numbers,starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0
*/

int main(void)
{
	int z, x;
	unsigned long n1 = 1, n2 = 2, sum, last = 100000000, r1 = 0, r2 = 0 sum0 = 0;

	for (z = 1; z <= 98; z++)
	{
		if (r1 > 0)
			printf("%lu", r1);
		x = _length(last) - 1 - _length(n1);

		while (r1 > 0 && x > 0)
		{
			printf("%d", 0);
			x--;
		}

		printf("%lu", n1);

		sum = (n1 + n2) % last;
		sum0 = r1 + r2 + (n1 + n2) / last;
		n1 = n2;
		r1 = r2;
		n2 = sum;
		r2 = sum0;

		if (z != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
