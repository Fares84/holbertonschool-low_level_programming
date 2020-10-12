#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main -  program that adds positive numbers
 *@argc: variable of the arguments
 *@argv: an array containing the program arguments
 *Return: return int
 **/
int main(int argc, char *argv[])
{
		int i, j, sum = 0;

		if (argc > 0)
		{
			for (i = 1; i < argc; i++)
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (!(isdigit(argv[i][j])))
					{
						printf("Error\n");
							return (1);
					}
				}
				sum = (sum + atoi(argv[i]));
			}
					printf("%d\n", sum);
		}
		else
		printf("0\n");
		return (0);
}
