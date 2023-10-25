#include "lists.h"

/**
 * get_nodeint_at_index - function that returns list's nth node
 *
 * @head: the first parameter
 *
 * @index: the second parameter
 *
 * Return: the number of the node or null
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int nth;

	for (node = head, nth = 0; node && nth < index; node = node->next, nth++)
		;
	return (node);
}
