#include "hash_tables.h"

/**
 *hash_table_set - adds an element to the hash table
 *@ht: the hash table we want to add or update to the key/value
 *@key: is the str passed to djb2 (the key)
 *@value: value associated with the key
 *Return: 1 if succeded or 0 if ot fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn;
	hash_node_t *newn;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	newn = ht->array[idx];
	if (newn)
	{
		if (newn && strcmp(newn->key, key) == 0)
		{
			free(newn->value);
			newn->value = strdup(value);
			return (1);
		}
		newn = newn->next;
	}

	if (newn == NULL)
	{
		hn = malloc(sizeof(hash_node_t));
		if (hn == NULL)
			return (0);

		hn->key = strdup(key);
		hn->value = strdup(value);
		hn->next = ht->array[idx];
		ht->array[idx] = hn;
		return (1);
	}

	return (1);
}
