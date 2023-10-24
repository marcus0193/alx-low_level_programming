#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 *
 * @h: first parameter
 *
 * Return: elements of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
