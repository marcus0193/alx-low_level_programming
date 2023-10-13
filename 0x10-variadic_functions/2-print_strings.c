#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: is the fisrt parameter
 * @n: is the second
 *
 * Return: numbers or new line
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *c;
	unsigned int i = n;

	va_start(ap, n);
	if (separator == (""))
	{
		printf("\n");
		return;
	}
	while (i--)
	{
		printf("%s%s", (c = va_arg(ap, char *)) ? c : "(nil)", i ? separator : "\n");
	}
	va_end(ap);
}
