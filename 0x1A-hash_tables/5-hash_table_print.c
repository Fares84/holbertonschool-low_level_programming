#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: is the hash table
 *Return: void (prints the hash or nothing if is NULL)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hn;
	char *check = "";
	unsigned int i;

	if (ht == NULL)
		return;
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hn = ht->array[i];
		while (hn)
		{
			printf("%s", check);
			printf("'%s': '%s'", hn->key, hn->value);
			check = ", ";
			hn = hn->next;
		}
	}
	printf("}\n");
}
