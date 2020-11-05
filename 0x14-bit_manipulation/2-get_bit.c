#include "holberton.h"

/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: the given number
 *@index: index starts from 0 of the bit to get
 *Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;

	size = (sizeof(n) * 8);

	if (index >= size)
		return (-1);
	return ((n >> index) & 1);
}
