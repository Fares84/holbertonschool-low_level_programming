#include "holberton.h"
#include <stdlib.h>

/**
 **_realloc - function that reallocates a memory block using malloc and free
 *@ptr: pointer to memory
 *@old_size: is the size in bytes of the allocatedspace for ptr
 *@new_size: is the new size in bytesof the new memory block
 *Return: a pointer
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new = malloc(new_size);
		for (i = 0; i < old_size; i++)
			*((char *)new + i) = *((char *)ptr + i);
		free(ptr);
		return (new);
	}
	new = malloc(new_size);
	for (i = 0; i < new_size; i++)
		*((char *)new + i) = *((char *)ptr + i);
	free(ptr);
	return (new);
}
