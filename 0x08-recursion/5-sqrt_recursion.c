#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * num_sqr - is a function to calcuate the square of a number
 *
 * @x: is function parameter 
 *
 * @sqr: is the second function parameter
 *
 * Return: ethier the square or the sqr valur or -1
*/

int num_sqr(int x, int sqr)
{
	if (sqr * sqr == x)
	{
	 	return (sqr);
	}
	else if (sqr * sqr < x)
	{
		return (num_sqr(x, sqr + 1));
	}
}

/**
 * _sqrt_recursion - is a function that returns the natural square root of a number
 *
 * @n: is the function parameter
 *
 * Return: the square of n or -1 if it's have not one
*/

int _sqrt_recursion(int n)
{
	return (num_sqr(n, 1));
}
