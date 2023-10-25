#include "lists.h"

/**
 * free_listint2 - function that frees a list as set head to null
 *
 * @head: the function parameter
 *
 * Return: nothing as void
*/

void free_listint2(listint_t **head)
{
	listint_t *curr, *hold;

	if (!head)
		return;
	curr = *head;
	while (curr)
	{
		hold = curr;
		curr = curr->next;
		free(hold);
	}
	*head = NULL;
}
