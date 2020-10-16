#include "holberton.h"
#include <stdlib.h>

/**
 **malloc_checked - function checks that allocates memory using malloc
 *@b: int
 *Return: void pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
