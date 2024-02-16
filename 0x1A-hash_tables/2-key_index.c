#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: index key
 * @size: size of table
 *
 * Return: index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
