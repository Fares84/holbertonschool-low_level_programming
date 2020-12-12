#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a dlistint_t list
 *@h: head node
 *Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
