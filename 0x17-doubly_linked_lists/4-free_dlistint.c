#include "lists.h"

/**
 *free_dlistint - free a DLL
 *@head: head node
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
