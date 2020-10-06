#include "holberton.h"

/**
 *_strchr - function that locates a character in a string
 * @s: buffer
 * @c: char
 * Return: s+i
 **/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		    break;
	}
	if (s[i] != c)
		return (0);

	return (s + i);
}
