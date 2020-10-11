#include <stdio.h>

/**
 *main -  program that prints the number of arguments
 *@argc: variable of the arguments
 *@argv: an array containing the program arguments
 *Return: return int
 **/
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	for (i = 0; i < argc; i++)
	{
		if (i + 1 == argc)
			printf("%d\n", i);
	}
	return (0);
}
