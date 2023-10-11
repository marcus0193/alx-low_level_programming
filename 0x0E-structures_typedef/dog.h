#ifndef D_H
#define D_H

/**
 * struct dog - a new strcut of the name dog
 * @age: the second member
 * @name: first member
 * @owner: the third member
 *
 * Description: a new struct for task 0 on 0x0E
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
