#include "holberton.h"
/**
 *print_last_digit - function that prints the last digit of a number
 *@n: int
 *Return: rest modulo
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
