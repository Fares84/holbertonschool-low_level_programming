#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: a is the array
 * @n: Where n is the number of elements of the array
 * return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	for ((i = 0, j = n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

	}
}
