#include "holberton.h"
/**
 *_isalpha -  function that checks for alphabetic character
 *@c: int
 *Return: 1 if c = alphabetic character
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
