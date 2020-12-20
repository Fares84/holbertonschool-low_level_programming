#include "lists.h"

/**
*get_dnodeint_at_index - function that returns node at given index
*@head: head node
*@index: index
*Return: node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *new_node;

	new_node = head;
	if (new_node == NULL)
		return (NULL);
	while (new_node)
	{
		if (idx == index)
			return (new_node);
	new_node = new_node->next;
	idx++;
	}
	return (new_node);
}
