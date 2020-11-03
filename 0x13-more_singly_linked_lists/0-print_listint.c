#include "lists.h"
#include <stdio.h>

/**
*print_listint - function that prints all the elements of a listint_t list
*@h: constant pointer type listint_t
*Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{

		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
