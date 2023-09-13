#include <stdio.h>
#include "main.h"

/**
 * main - Starting point
 *
 * Description: prints the sum of the even-valued terms not exceed 4,000,000
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum;
	float tsum;

	while (1)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			tsum += sum;

		n1 = n2;
		n2 = sum;
	}
	printf("%.0f\n", tsum);

	return (0);
}
