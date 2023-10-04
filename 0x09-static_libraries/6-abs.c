#include <stdio.h>
#include "main.h"

/**
 * _abs - is a function to absolute
 *
 * @n: input prarmerter of the function
 *
 * Description: function that computes the absolute value of an integer
 *
 * Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
