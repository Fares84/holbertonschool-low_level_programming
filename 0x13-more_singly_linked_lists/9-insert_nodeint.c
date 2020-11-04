#include "lists.h"

/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@head: double pointer to the head of the lisint list
*@idx: is the index of the list where the new node should be added
*@n: is the data
*Return: Null if it failed or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert_node, *get_node;
	unsigned int i;

	get_node = *head;

	insert_node = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	if (insert_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		insert_node->n = n;
		insert_node->next = get_node;
		*head = insert_node;
		return (insert_node);
	}
	while (i < idx)
	{
		if (get_node == NULL)
			return (NULL);
		get_node = get_node->next;
			i++;
	}
	insert_node->n = n;
        insert_node->next = get_node->next;
        get_node->next = insert_node;
	return (insert_node);
}
