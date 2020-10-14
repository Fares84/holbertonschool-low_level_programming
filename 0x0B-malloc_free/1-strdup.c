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

	int i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	p[i] = str[i];
	return (p);
}
