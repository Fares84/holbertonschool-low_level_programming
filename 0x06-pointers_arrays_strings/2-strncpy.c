#include "holberton.h"

/**
 *_strncpy - function that print string
 *@dest: the first string (char)
 *@src: the second string (char) that we will add
 *@n: weight of the string
 *Return: dest(char)
 **/
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
