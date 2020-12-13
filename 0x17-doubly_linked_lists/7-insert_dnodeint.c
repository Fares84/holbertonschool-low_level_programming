#include "lists.h"

/**
 *insert_dnodeint_at_index - function that inserts new node at a given position
 *@h: head node
 *@idx: index
 *@n: new data
 *Return: new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node = *h, *new_node = NULL, *save_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if(new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;


	if (idx == 0)
	{
		if (!node)
			*h = new_node;
		else
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			*h = new_node;
		}
		return (new_node);
	}

	for(i = 0; i < idx-1; i++)
	{
		node = node->next;
	}
	if (new_node == NULL)
		return (NULL);
	if (node->next)
	{
		save_node = node->next;
		node->next = new_node;
		new_node->prev = node;
		new_node->next = save_node;
		save_node->prev = new_node;
	}
	else
	{
		node->next = new_node;
		new_node->prev = node;
	}
	return (new_node);
}
