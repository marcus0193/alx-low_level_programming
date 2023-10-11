#include "dog.h"
#include <stdlib.h>

/**
 * length - a function to get the length of strig
 * @len: the first parameter
 *
 * Return: the number of bytes that len consume
*/

int length(const char *len)
{
	int n = 0;

	while (*len++)
		n++;
	return (n);
}

/**
 * copy - a function to copy strings
 * @from: first parameter
 * @to: second parameter
 *
 * Return: the to copy
*/

char *copy(char *to, char *from)
{
	int x;

	for (x = 0; from[x]; x++)
		to[x] = from[x];
	to[x] = '\0';

	return (to);
}

/**
 * *new_dog - function that creates a new dog
 * @name: the first parameter
 * @age: the second parameter
 * @owner: the third parameter
 *
 * Return: pointer of the type strcut dog or null 
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || age < 0 || !owner)
		return (NULL);

	new = (dog_t *) malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(sizeof(char) * (length(name) + 1));
	if ((*new).name == NULL)
	{
		free(new);
		return (NULL):
	}

	new->owner = malloc(sizeof(char) * (length(owner) + 1));
	if ((*new).owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->name = copy(new->name, name);
	new->age = age;
	new->owner = copy(new->owner, owner);

	return (new);
}



