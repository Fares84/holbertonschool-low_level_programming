#include "lists.h"

/**
*free_listint -  function that frees a listint_t list
*@head: pointer to the head of the list
*Return: void
*/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
