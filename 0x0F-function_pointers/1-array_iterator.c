#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a paramete
 *
 * @array: is the first parameter
 *
 * @size: is the second
 *
 * @action: is the third
 *
 * Return: nothings as a void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);
}
