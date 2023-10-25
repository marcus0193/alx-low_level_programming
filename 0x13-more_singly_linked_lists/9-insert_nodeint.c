#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the first parameter
 *
 * @idx: the second parameter
 *
 * @n: the third parameter
 *
 * Return: the address of the node or null
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *nnode = malloc(sizeof(listint_t));
	unsigned int num = 0;

	if (!head || !nnode)
		return (NULL);

	nnode->n = n;
	nnode->next = NULL;
	if (!idx)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}
	node = *head;
	while (node)
	{
		if (num == idx - 1)
		{
			nnode->next = node->next;
			node->next = nnode;
			return (nnode);
		}
		num++;
		node = node->next;
	}
	free(nnode);
	return (NULL);
}
