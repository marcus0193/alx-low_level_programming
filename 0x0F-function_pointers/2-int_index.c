#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: is the first parameter
 *
 * @size: is the second
 *
 * @cmp: is the third
 *
 * Return: integer of i or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && size && cmp)
		while (index < size)
		{
			if (cmp(array[index]))
				return (index);
			index++;
		}
	return (-1);
}
