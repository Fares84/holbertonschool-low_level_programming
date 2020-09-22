#include "holberton.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@n: int
 *Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n);
	}
	else
		return (n);
}
