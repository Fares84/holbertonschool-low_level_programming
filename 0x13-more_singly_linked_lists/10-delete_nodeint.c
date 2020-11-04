#include "lists.h"

/**
*delete_nodeint_at_index - function that deletes the node at index index
*of a listint_t linked list
*@head: double pointer to the head of the list
*@index: index of the node should be deleted
*Return: 1 if it seccueed and -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trash = *head, *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = trash->next;
		free(trash);
		return (1);
	}
	if (i < index)
	{
		trash = trash->next;
		i++;
	}
	if (trash == NULL || trash->next == NULL)
		return (-1);
	node = trash->next;
	free(trash->next);
	trash = node;
	return (1);
}
