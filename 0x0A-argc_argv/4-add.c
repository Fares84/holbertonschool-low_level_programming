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
		int i, j, sum;

		if (argc < 2)
		{
			printf("%d\n", 0);

		}
		
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		sum = i + j;
                {
                        printf("%d\n", sum);
			return (0);
                }
	}
