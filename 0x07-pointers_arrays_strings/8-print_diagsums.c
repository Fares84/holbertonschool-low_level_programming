#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that print the sum of the two diagonals of squeare
 * matrix
 * @a: pointer to an integer
 * @size: int
 * Return: void
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = diag1 + a[(size + 1) * i];
	}
	for (i = 1; i < size + 1; i++)
	{
		diag2 = diag2 + a[(size - 1) * i];
	}
	printf("%d, %d\n", diag1, diag2);
}
