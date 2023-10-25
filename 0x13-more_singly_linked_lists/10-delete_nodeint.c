#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a new node at a given position
 *
 * @head: the first parameter
 *
 * @index: the second parameter
 *
 * Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *pnode;
	unsigned int num = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (num == index)
		{
			pnode->next = node->next;
			free(node);
			return (1);
		}
		num++;
		pnode = node;
		node = node->next;
	}
	return (-1);
}
