#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: table to be deleted
 *
 * Return: nothing as void func
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (n = 0; n < ht->size; n++)
	{
		while (ht->array[n] != NULL)
		{
			next = ht->array[n]->next;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
