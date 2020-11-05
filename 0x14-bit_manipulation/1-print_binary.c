#include "holberton.h"

/**
 *print_binary - function that prints the binary representation of a number
 *@n: unsigned long int to turn to binary
 *Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
