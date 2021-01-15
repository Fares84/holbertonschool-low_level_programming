#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *@key: is the key (the word passed to save in the hash table)
 *@size: is the size of the array of the hash table
 *Return: the index at which the key/value pair should be stored in
 * the hash-Table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key) % size;

	return (index);
}
