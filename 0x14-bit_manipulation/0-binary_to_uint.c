#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *binary_to_uint - function that converts a binary number to an unsigned int
 *@b: a pointer to s srting of 0 and 1 char
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bin = 1, conv = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}
	i--;
	while (i >= 0)
	{
		if (b[i] == '1')
			conv = conv + bin;
		i--;
		bin = bin * 2;
	}
	return (conv);
}
