#include "holberton.h"

/**
 *cap_string - function that capitalizes all words of a string
 *@s: string
 *return: s
 **/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i-1] == '')
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
	}
	return (s);
}
