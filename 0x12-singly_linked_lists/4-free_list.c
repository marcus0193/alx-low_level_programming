#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: the first node
 *
 * Return: nothing as void
*/

void free_list(list_t *head)
{
	list_t *first, *next;

	first = head;
	while (first)
	{
		if (!first)
			return;
		next = first->next;
		free(first->str);
		free(first);
		first = next;
	}
}
