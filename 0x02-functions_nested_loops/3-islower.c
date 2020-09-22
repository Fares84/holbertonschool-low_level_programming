#include "holberton.h"
/**
 *_islower - function that checks for lowercase character
 *@c: int
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
