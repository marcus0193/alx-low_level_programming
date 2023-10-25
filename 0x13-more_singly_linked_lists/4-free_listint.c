#include "lists.h"

/**
 * free_listint - function that  frees a list.
 *
 * @head: the function parameter
 *
 * Return: nothing as void function
*/

void free_listint(listint_t *head)
{
	listint_t *nptr;

	while (head)
	{
		nptr = head;
		head = head->next;
		free(nptr);
	}
}
