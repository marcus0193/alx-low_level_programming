#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 *
 * @head: first node
 * @str: the content
 *
 * Return: null or the add of the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(new_node->str);
	}
	if (tail)
	{
		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
