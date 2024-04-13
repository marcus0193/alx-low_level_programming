#include "hash_tables.h"

/**
 * make_node - create new node
 * @key: node's key
 * @value: node's value
 *
 * Return: new node or NULL
*/
hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *nod;

	nod = malloc(sizeof(hash_node_t));
	if (nod == NULL)
		return (NULL);
	nod->key = strdup(key);
	if (nod->key == NULL)
	{
		free(nod);
		return (NULL);
	}
	nod->value = strdup(value);
	if (nod->value == NULL)
	{
		free(nod->key);
		free(nod);
		return (NULL);
	}
	nod->next = NULL;
	return (nod);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: table to add to
 * @key: key data
 * @value: data
 *
 * Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	hash_node_t *node, *tempo;
	char *nvalue;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	ind = key_index((const unsigned char *)key, ht->size);
	tempo = ht->array[ind];
	while (tempo != NULL)
	{
		if (strcmp(tempo->key, key) == 0)
		{
			nvalue = strdup(value);
			if (nvalue == NULL)
				return (0);
			free(tempo->value);
			tempo->value = nvalue;
			return (1);
		}
		tempo = tempo->next;
	}
	node = make_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[ind];
	ht->array[ind] = node;
	return (1);
}
