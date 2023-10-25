#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of list
 *
 * @head: is the first parameter
 *
 * @n: is the second parameter
 *
 * Return: the address of null
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !nnode)
		return (NULL);
	nnode->next = NULL;
	nnode->n = n;
	if (!*head)
		*head = nnode;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = nnode;
	}
	return (nnode);
}
