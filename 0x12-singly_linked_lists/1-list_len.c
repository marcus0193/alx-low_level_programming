#include "lists.h"

/**
 * list_len - function that returns num of ele of list
 *
 * @h: the first node add
 *
 * Return: num of elements
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
