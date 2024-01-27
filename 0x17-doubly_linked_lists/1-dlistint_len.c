#include "lists.h"

/**
 * dlistint_len - mesure the len of double list.
 * @h: pointer to the head
 *
 * Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
