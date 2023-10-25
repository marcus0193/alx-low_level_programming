#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data on list
 *
 * @head: the function parameter
 *
 * Return: teh sum or null if it was empty
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
