#include "holberton.h"

/**
 * print_chessboard - function that prints the sum of the two diagonals of a squ
 *are matrix of integers
 * @a: cheese
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar('\n');
	}
}
