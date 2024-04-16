#include "hash_tables.h"

/**
 * shash_table_create - func that creates a table
 * @size: tables's size
 *
 * Return: pointer to the table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash;
	unsigned long int n;

	hash = malloc(sizeof(shash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->shead = NULL;
	hash->stail = NULL;
	hash->array = malloc(size * sizeof(shash_node_t) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		hash->array[n] = NULL;
	}
	return (hash);
}

/**
 * make_shash_node - make a node for a hash table
 * @key: key of data
 * @value: stored data
 *
 * Return: pointer to the node
*/
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *nod;

	nod = malloc(sizeof(shash_node_t));
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
	nod->next = nod->snext = nod->sprev =  NULL;
	return (nod);
}

/**
 * add_to_sorted_list - add to a list by key
 * @table: the sorted table
 * @node: the added node
 *
 * Return: nothing as a void
*/
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *tempo;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	tempo = table->shead;
	while (tempo != NULL)
	{
		if (strcmp(node->key, tempo->key) < 0)
		{
			node->snext = tempo;
			node->sprev = tempo->sprev;
			tempo->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		tempo = tempo->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - set the value of a key of the table
 * @ht: hash table
 * @key: key of the data
 * @value: data value
 *
 * Return: 1 or 0
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ind;
	char *nvalue;
	shash_node_t *tempo, *n;

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
	n = make_shash_node(key, value);
	if (n == NULL)
		return (0);
	n->next = ht->array[ind];
	ht->array[ind] = n;
	add_to_sorted_list(ht, n);
	return (1);
}

/**
 * shash_table_get - saerch the value from a table
 * @ht: the table
 * @key: the data to search
 *
 * Return: the value of the key or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int ind;
	shash_node_t *tempo;

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

/**
 * shash_table_print - print a sorted table
 * @ht: the table itself
 *
 * Return: nothing as a void func
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tempo;
	char dis = 0; /* 0 if the table is empty*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tempo = ht->shead;
	while (tempo != NULL)
	{
		if (dis == 1)
			printf(", ");
		printf("'%s': '%s'", tempo->key, tempo->value);
		dis = 1;
		tempo = tempo->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print in revers
 * @ht: the table itself
 *
 * Return: nothing as a void func
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tempo;
	char dis = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	tempo = ht->stail;
	while (tempo != NULL)
	{
		if (dis == 1)
			printf(", ");
		printf("'%s': '%s'", tempo->key, tempo->value);
		dis = 1;
		tempo = tempo->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted table
 * @ht: the table itself
 *
 * Return: nothing as a void func
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int n;
	shash_node_t *next;

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
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
