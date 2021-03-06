#include "holberton.h"
#include <stdlib.h>

/**
 **str_concat - function that concatenates two strings
 *@s1: char
 *@s2: char
 *Return: string
 **/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, length1, length2;

	length1 = 0;
	length2 = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;
	s = malloc((length1 + length2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		s[i] = s1[i];
	for (; i < length1 + length2; i++)
	{
		s[i] = s2[j];
		j++;
	}
	return (s);
}
