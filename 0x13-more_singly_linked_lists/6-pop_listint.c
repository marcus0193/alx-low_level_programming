#include "lists.h"

/**
 * pop_listint - deletes list's head node and returns the head node’s
 *
 * @head: the function parameter
 *
 * Return: even the head node or 0
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int count;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	count = (*head)->n;
	free(*head);
	*head = node;
	return (count);
}
