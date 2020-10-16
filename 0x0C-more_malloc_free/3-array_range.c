#include "holberton.h"
#include <stdlib.h>

/**
 **array_range - function that creates an array of integers
 *@min: int
 *@max: int
 *Return: pointer
 **/
int *array_range(int min, int max)
{
	int i;
	int pos;
	int *mem;

	if (min  > max)
		return (NULL);
	pos = max - min + 1;
	mem = malloc(pos * (sizeof(int)));

	if (mem == NULL)
		return (NULL);
	for (i = 0; i < max - min; i++)
		mem[i] = min + i;
	return (mem);
}
