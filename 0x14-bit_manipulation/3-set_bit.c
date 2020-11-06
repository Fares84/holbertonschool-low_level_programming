#include "holberton.h"

/**
 *set_bit - function that sets the value of a bit to 1 at a given index
 *@n: the given number
 *@index: index starts from 0 to the bit to set
 *Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_value;

	if (index > sizeof(n) * 8)
		return (-1);

	new_value = 1 << index;
	*n = *n | new_value;
	return (1);
}
