#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: the size of the arrray
 *
 * Return: pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int n;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(size * sizeof(hash_node_t *));
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		hash->array[n] = NULL;
	return (hash);
}
