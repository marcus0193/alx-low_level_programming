#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 *
 * @name: the first parameter
 *
 * @f: the second parameter
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
