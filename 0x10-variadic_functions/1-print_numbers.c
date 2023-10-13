#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: is the fisrt parameter
 * @n: is the second
 *
 * Return: numbers or new line
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = n;

	va_start(ap, n);
	if (separator == (""))
	{
		printf("\n");
		return;
	}
	while (i--)
	{
		printf("%d%s", va_arg(ap, int), i ? separator : "\n");
	}
	va_end(ap);
}
