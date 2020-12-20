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
	dlistint_t *new_node, *save_node;

	save_node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i != idx -1)
	{
		if (!save_node)
			return (NULL);
		save_node = save_node->next;
		i++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (save_node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	save_node->next->prev = new_node;
	new_node->prev = save_node;
	new_node->next = save_node->next;
	save_node->next = new_node;
	return (new_node);
}
