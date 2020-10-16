#include "holberton.h"
#include <stdlib.h>

/**
 **argstostr - function that concatenates all the arguments of your program
 *@ac : int
 *@av: char
 *Return: char
 **/
char *argstostr(int ac, char **av)
{

	int i, j, size, arg = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[arg] = av[i][j];
			arg++;
		}
		s[arg] = '\n';
		arg++;
	}
	s[arg] = '\0';
	return (s);
}
