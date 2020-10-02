#include "holberton.h"

/**
 *leet - function that encodes a string into 1337
 *@s: string
 *Return: s
 **/
char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; num[j] != 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
