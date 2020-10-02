#include "holberton.h"

/**
 *rot13 - function that encodes a string using rot13
 *@s: string
 *Return: s
 **/
char *rot13(char *s)
{
	int i;
	int j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char num[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; num[j] != 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
