#include "lists.h"
#include <stdio.h>

/**
*listint_len - function that prints all the elements of a listint_t list
*@h: constant pointer type listint_t
*Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->n)
		printf ("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
