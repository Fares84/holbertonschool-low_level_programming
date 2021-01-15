#include "hash_tables.h"

/**
 *hash_table_create -creates a hash tables
 *@size: hash tables array's size
 *Return: a pointer ti the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}
	ht->array = malloc(size * 8);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	return (ht);
}
