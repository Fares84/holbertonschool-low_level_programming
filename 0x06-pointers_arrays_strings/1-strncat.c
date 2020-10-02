#include "holberton.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: the first string (char)
 *@src: the second string (char) that we will add
 *@n: weight of the
 *Return: dest(char)
 **/
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}

	for (j = 0 ; j < n && src[j] != '\0' ; j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
