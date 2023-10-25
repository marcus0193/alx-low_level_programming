#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 *
 * @head: is the function parameter
 *
 * Return: pointer to the reversed head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL, *hop = NULL;

	if (!head || !*head)
		return (NULL);

	rev = *head;
	*head = NULL;
	while (rev)
	{
		hop = rev->next;
		rev->next = *head;
		*head = rev;
		rev = hop;
	}
	return (*head);
}
