#include "holberton.h"

/**
 *_pow_recursion - function that returns the value of x raised to the power of y
 *@x: int
 *@y: int
 *Return: int
 **/
int _pow_recursion(int x, int y)
{
	if (y  < 0)
	{
		return (0);
	}
	if (y == 0)
	{
		return (1);
	}

	return(_pow_recursion(x, y) * x);

}
