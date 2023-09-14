#include <stdio.h>
#include "main.h"

/**
 * main - function that prints num from 1 to 100 followed by \n
 *        
 * Description: for any number can be moduled by 3 out of 0 print fizz
 *              for any number can be moduled by 5 out of 0 print buzz
 *              for any number can be moduled by 3 and 5 out of 0 print
 *              fizzbuzz any number and word separted by space
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
