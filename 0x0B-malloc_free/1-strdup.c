#include "holberton.h"
#include <stdlib.h>

/**
 **_strdup - function that concatenates two strings
 * space in memory
 *@str: string to copy
 *Return: char
 **/
char *_strdup(char *str)
{

	int size;
	char *p;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		p[size] = str[size];
	return (p);
}
