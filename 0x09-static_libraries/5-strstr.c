#include "holberton.h"

/**
 * _strstr -  function that locates a substring
 * @haystack: buffer
 * @needle: buffer2
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
