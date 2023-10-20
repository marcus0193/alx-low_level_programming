#include "lists.h"

/**
 * _strlen - a custoum strlen function
 *
 * @s: the passed string
 *
 * Return: the lenght of s
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - function that prints all the elements list.
 *
 * @h: is the head node
 *
 * Return: the number of nodes and content
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		printf("[0] (nil)");
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		i++;
	}
	return (i);
}
