#include "lists.h"

/**
 *_strlen - function that returns the length of a string
 *@s: is a character
 *Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 *add_node_end - function that adds a new node at the end of a list_t list
 *@head: double pointer to list_t
 *@str: pointer to the first node in list_t
 *Return: pointer to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *pointer;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	pointer = *head;
	while (pointer->next)
	{
		pointer = pointer->next;
	}
	pointer->next = node;
	return (node);
}
