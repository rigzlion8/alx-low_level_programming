#include "hash_tables.h"

/**
 * hash_table_create - this creates a hash table
 * @size: this is the size of the array
 * Return: a pointer to the newly created hash table, NULL if something fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (!ht->array)
		return (free(ht), NULL);

	return (ht);
}
