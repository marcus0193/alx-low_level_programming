#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Ckeching n value of random number
 *
 * Description: true or false validation of the number value by if estatments
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
