#include "lists.h"

/**
*insert_nodeint_at_index - function that inserts a new node at a given position
*@idx: is the index of the list where the new node should be added
*@n: is the data
*Return: Null if it failed or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);
	insert = malloc(sizeof(listint_t));

	insert->n = n;
	
