#include "lists.h"

/**
 *sum_dlistint - unction that returns the sum nodes of dll
 *@head: head node
 *Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	if (head == NULL)
		return (0);
	while (head)
	{
	node = head;
	sum = sum + node->n;
	head = head->next;
	}
		return (sum);

}
