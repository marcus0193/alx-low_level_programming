#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: is the first parameter
 *
 * Return: sum or 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(ap, int);
	}
	return (sum);
}

