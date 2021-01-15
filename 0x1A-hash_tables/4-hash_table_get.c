#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: is the hash table we want to look inside
 *@key: is the key we are ooking for in the hash table
 *Return: the value associated with the key or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx;
	hash_node_t *hn;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	hn = ht->array[idx];
	if (hn)
	{
		if (strcmp(hn->key, key) == 0)
			return (hn->value);
		hn = hn->next;
	}
	return (NULL);
}
