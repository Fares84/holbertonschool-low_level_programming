B#include "holberton.h"

/**
 *is_prime - function that give the prime number
 *@n: int
 *@i: int
 *Return: int
 **/
int is_prime(int i, int n)
{
	if ( n % i == 0 || n < 2)
	{
		return (0);
	}
	if (i > n / 2)
	{
		return (1);
	}
	return (is_prime(i + 1, n));
}


/**
 *is_prime_number - function that returns 1 if the input int is a prime number
 *@n: int
 *Return: int
 **/
int is_prime_number(int n)
{
	return (is_prime(2, n));
}
