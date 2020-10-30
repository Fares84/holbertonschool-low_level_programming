#include "lists.h"

/**
 *print_list - fucntion that prints all the elements of list
 *@h: pointer to the begining of the linked list
 *Return: the number of nodes
 **/
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
