#include "lists.h"

/**
 * listint_len - function that prints the number of elements of a list
 *
 * @h: first parameter
 *
 * Return: number elements of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
