#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - function that adds a new node at the end of a listint_t list
*@head: double pointer to listint_t
*@n: element to add to the list
*Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_tailnode;
	listint_t *head_node;

	new_tailnode = malloc(sizeof(listint_t));
	if (new_tailnode)
	{
		new_tailnode->next = NULL;
		new_tailnode->n = n;

		if (!*head)
		{
			*head = new_tailnode;
			return (new_tailnode);
		}
			head_node = *head;
			while (head_node->next)
				head_node = head_node->next;
			head_node->next = new_tailnode;
			return (new_tailnode);
	}
	return (NULL);
}
