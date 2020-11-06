#include "holberton.h"

/**
 *flip_bits - unction that returns the number of bits you would need to flip
 *to get from one number to another
 *@n: first given number
 *@m: the number to flip
 *Return: an unsigned int (number of bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, i = 0;

	flip =  n ^ m;
	while (flip)
	{
		i = i + (flip & 1);
		flip >>= 1;
	}
	return (i);
}
