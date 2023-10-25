#include "lists.h"

/**
 * find_listint_loop - function that find the loop in list
 *
 * @head: the function parameter
 *
 * Return: address of the node where the loop started or null
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lonode, *last;

	if (head == NULL)
		return (NULL);
	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (lonode = head; lonode != last; lonode = lonode->next)
			if (lonode == last->next)
				return (last->next);
	}
	return (NULL);
}
