#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - identfing number by digits
 *
 * Description: displaying the status digits of the random number
 *              greater than 5, equal 0, less than 6.
 *
 * Return 0 (Success)
*/

int main(void)
{
	int n; y

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	if (y > 5)
		printf("Last digit of %i is %i and is greater than 5", n, y);
	else if (y == 0)
		printf("Last digit of %i is %i and is 0", n, y);
	else if (y < 6 && y != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0", n, y);
	return (0);
}
