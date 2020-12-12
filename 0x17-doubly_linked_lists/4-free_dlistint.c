#include "lists.h"

/**
 *free_dlistint - free a DLL
 *@head: head node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;

	while (head)
	{
		node = head;
		free(node);
		node = head->next;
	}

}
