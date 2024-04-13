#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the table
 * @key: key to get the value from
 *
 * Return: value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *tempo;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[ind];
	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
			return (tempo->value);
		tempo = tempo->next;
	}
	return (NULL);
}
