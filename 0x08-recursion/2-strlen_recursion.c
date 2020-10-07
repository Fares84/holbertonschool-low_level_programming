#include "holberton.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: char
 *Return: 0 on success
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return	(_strlen_recursion(s + 1) + 1);

	}
	return (*s);
}
