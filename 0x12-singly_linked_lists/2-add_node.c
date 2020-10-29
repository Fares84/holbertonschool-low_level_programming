#include "lists.h"

/**
 *add_node - function that adds a new node at the beginning of a list_t list
 *@head: double pointer to list_t
 *@str: pointer to the first node in list_t
 *Return: a pointer to the new string
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *node;

	if (!str)
		return (NULL);
	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	node->len = i;
	node->next = *head;
	*head = node;
	return (*head);
}
