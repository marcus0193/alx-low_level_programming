#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: table to print
 *
 * Return: nothing as void func
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *tempo;
	char dis = 0; /* 0 if the table is empty*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		tempo = ht->array[n];
		while (tempo != NULL)
		{
			if (dis == 1)
				printf(", ");
			printf("'%s': '%s'", tempo->key, tempo->value);
			dis = 1;
			tempo = tempo->next;
		}
	}
	printf("}\n");
}
