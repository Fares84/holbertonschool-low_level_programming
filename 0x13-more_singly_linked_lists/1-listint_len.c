#include "lists.h"

/**
 *listint_len - function that returns the number of elements in a linked
 *listint_t list
 *@h: constant pointer type list_t
 *Return: length of one node
 */
size_t listint_len(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
