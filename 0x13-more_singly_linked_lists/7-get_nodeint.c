#include "lists.h"

/**
*get_nodeint_at_index -  function that returns the nth node of a listint_t
*linked list
*@head: a pointer to the head of the listint_t list
*@index: the index of the node starting at 0
*Return: the nth node of listint_t or NULL if the node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n_node;

	n_node = head;
	while (n_node != NULL)
	{
		if (i == index)
			return (n_node);
		i++;
		n_node = n_node->next;
	}
	return (NULL);
}
