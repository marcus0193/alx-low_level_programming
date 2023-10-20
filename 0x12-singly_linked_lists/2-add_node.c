#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 *
 * @head: first node
 * @str: the content
 *
 * Return: null or the add of the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!head || !new_node)
		return (NULL);
	if (str)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(new_node->str);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
