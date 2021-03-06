#include "holberton.h"

/**
 *_sqrt - function that give the square root
 *@n: int
 *@i: int
 *Return: int
 **/
int _sqrt(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(i + 1, n));
}


/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: int
 *Return: int
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
