#include "lists.h"

/**
 *list_len - function that returns the number of elements in a linked
 *@h: pointer to the begining of the llinked list
 *Return: number of elements in list_t
 *
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
