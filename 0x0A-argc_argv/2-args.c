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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
