#include "variadic_functions.h"

/**
 * _ifchar - for character
 *
 * @idintfer: the parameter
 * @ap: second parameter
*/

void _ifchar(char *idintfer, va_list ap)
{
	printf("%s%c", idintfer, va_arg(ap, int));
}

/**
 * _ifint - for intergers
 *
 * @idintfer: the parameter
 * @ap: second parameter
*/

void _ifint(char *idintfer, va_list ap)
{
	printf("%s%d", idintfer, va_arg(ap, int));
}

/**
 * _iffloat - for floats
 *
 * @idintfer: parameter one
 * @ap: second parameter
*/

void _iffloat(char *idintfer, va_list ap)
{
	printf("%s%f", idintfer, va_arg(ap, double));
}

/**
 * _ifstring - for string
 *
 * @idintfer: parameter one
 * @ap: second parameter
*/

void _ifstring(char *idintfer, va_list ap)
{
	char *s = va_arg(ap, char *);

	printf("%s%s", idintfer, s ? s : "(nil)");
}

/**
 * print_all - function that print everything
 *
 * @format: the parameter
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, y;
	char *idintfer = "";
	va_list ap;
	print_t prints[] = {
		{"c", _ifchar},
		{"i", _ifint},
		{"f", _iffloat},
		{"s", _ifstring},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		y = 0;
		while (prints[y].print)
		{
			if (format[i] == prints[y].print[0])
			{
				prints[y].f(idintfer, ap);
				idintfer = ", ";
			}
			y++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
