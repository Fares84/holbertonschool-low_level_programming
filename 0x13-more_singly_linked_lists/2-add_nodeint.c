#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint - function that adds a new node at the beginning of a listint_t
*list
*@head: double pointer to listint_t
*@n: the number of elements in listint_t
*Return: the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	return (NULL);
}
