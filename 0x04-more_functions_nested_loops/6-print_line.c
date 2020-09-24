#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: int
 * Return: Null
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
