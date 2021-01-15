#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table we want to delete
 *Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *hn, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			hn = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = hn;
		}
	}
	free(ht->array);
	free(ht);
}
