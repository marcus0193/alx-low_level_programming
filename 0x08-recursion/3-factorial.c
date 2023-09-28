#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * factorial - is a function that returns the factorial of a given number
 *
 * @n: is the first parameter of the function
 *
 * Return: the factorial of n or -1 if it's lower than 0
*/

int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
