#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at given index DLL
 *@head: head node
 *@index: index
 *Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t  *save_next, *save_prev;

	save_prev = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (!save_prev)
			return (-1);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (save_prev)
	{
		if (i == index)
		{
			save_next = save_prev->next;
			if (save_next)
			{
				save_prev->next = save_next->next;
				if (save_next->next)
					save_next->next->prev = save_prev;
				return (1);
			}
		}
		save_prev = save_prev->next;
		i++;
	}
	return (-1);
}
