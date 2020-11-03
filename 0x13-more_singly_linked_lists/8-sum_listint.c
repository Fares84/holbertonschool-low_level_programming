#include "lists.h"

/**
*sum_listint - function that returns the sum of all the data (n)
*@head: a pointer yo the head of the lisint_t list
*Return: the sum
*/
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *node_data = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		node_data = head->next;
		head = node_data;
	}
	return (sum);
}
