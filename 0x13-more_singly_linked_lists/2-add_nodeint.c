#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of list
 *
 * @head: the first parameter
 *
 * @n: the second parameter
 *
 * Return: the address of the node or null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));

	if (!head || !nnode)
		return (NULL);
	nnode->next = NULL;
	nnode->n = n;
	if (*head)
		nnode->next = *head;
	*head = nnode;
	return (nnode);
}
