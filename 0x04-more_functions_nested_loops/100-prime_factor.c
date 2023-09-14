#include <stdio.h>
#include "main"

/**
 * _sqnum - function to calculate the sqaure of numbers
 *
 * @n: input prameter
 *
 * Return: sqaure of the y
*/

double _sqnum(double y)
{
	float s, t;

	s = y / 2;
	t = 0;

	while (s != t)
	{
		t = s;
		s = (y / t + t) / 2;
	}
	return (s);
}

/**
 * lar_pr_fa - function that calculate and prints 
 *             largest prime factor number of n
 *
 * @n: input prameter for the function
*/

void lar_pr_fa(long int n)
{
	int x, z;

	while (n % 2 == 0)
		n = n / 2;

	for (x = 3; x <= _sqnum(n); x += 2)
	{
		while (n % x == 0)
		{
			num = num / x;
			z = x
		}
	}

	if (n > 2)
		z = n;
	printf("%d\n", z);
}

/**
 * main - starting point of the code
 *
 * Return: Always 0
*/

int main(void)
{
	lar_pr_fa(612852475143);

	return (0);
}
