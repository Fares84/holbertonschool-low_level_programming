#include "lists.h"

/**
*pop_listint - function that deletes the head node of a listint_t linked list
*@head: double pointer to the head of the list
*Return:  the head nodes data (n)
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new_head = NULL;

	if (!*head)
		return (0);

	i = (*head)->n;
	new_head = (*head)->next;
	(*head) = new_head;
	return (i);
}
