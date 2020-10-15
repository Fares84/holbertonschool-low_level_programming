#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: size of these elements
 *Return: a pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int s;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (s = 0; s < nmemb * size; s++)
		ptr[s] = 0;
		return (ptr);
}
