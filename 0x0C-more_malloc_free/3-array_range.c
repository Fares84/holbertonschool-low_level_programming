#include "holberton.h"
#include <stdlib.h>

/**
 **array_range - function that creates an array of integers
 *@min:
 *@max:
 *Return: pointer
 **/
int *array_range(int min, int max)
{
	int *mem;
	int pos;
	int i;
	
	if (min  > max)
		return (NULL);
	pos = max - min;
	mem = malloc(pos * (sizeof(int));

		     if (mem = NULL)
			     return (NULL);
		     for (i = 0; i < max-min; i++)
			     mem[i] = 0;
		     return (mem);
 }
