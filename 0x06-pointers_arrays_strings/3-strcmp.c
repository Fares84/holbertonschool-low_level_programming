#include "holberton.h"

/**
 *function -  that compares two strings
 *@dest: char
 *@src: char
 *return: int
 **/

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	while( ( dest[i] != '\0' && str[j] != '\0' ) && dest[i] == str[j] )
	{
		i++;
		j++;
	}

	if(dest[i] == str[j])
	{
		return 0;
	}

	else
	{
		return dest[i] - str[j];
	}
}
