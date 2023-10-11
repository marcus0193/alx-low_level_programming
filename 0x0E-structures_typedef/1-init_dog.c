#include "dog.h"

/**
 * init_dog - function that initi a variable of type struct dog
 * @d: the second member
 * @*name: first member
 * @*owner: the third member
 * @owner: fourth parameter
 *
 * Return: nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
