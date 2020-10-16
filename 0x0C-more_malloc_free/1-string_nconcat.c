#include "holberton.h"
#include <stdlib.h>


/**
 **string_nconcat - function that concatenates two strings
 *@s1: char
 *@s2: char
 *@n: size
 *Return: string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1;
	unsigned int length2;
	unsigned int i;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (length1 = 0; s1[length1] != '\0'; length1++)
	{
	}
	for (length2 = 0; s2[length2] != '\0'; length2++)
	{
	}

	if (n > length2)
		n = length2;
	string = malloc((length1 + n + 1) * sizeof(char));

	if  (string == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		string[i] = s1[i];
	for (i = 0; i < n; i++)
		string[length1 + i] = s2[i];
	string[length1 + n] = '\0';
	return (string);
}
