#include "holberton.h"

/**
 *error97 - when it fails print message error
 *Return: exit 97
 */
void error97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to"),
		exit(97);
}

/**
 *error98 - when it fails print message error
 *@s: file name
 *Return: exit 98
 */
void error98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		s),
		exit(98);
}
/**
 *error99 - when it fails print message error
 *@s: file name
 *Return: exit 99
 */
void error99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s),
		exit(99);
}
/**
 *error100 - when it fails print message error
 *@s: file descriptor
 *Return: exit 100
 */
void error100(int s)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s),
		exit(100);
}



/**
 *main - program that copies the content of a file to another file
 *@argc: number of arguments passed to the program
 *@argv: array of character pointers listing all the arguments
 *Return: 0 on success and error if it fails
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int file_from = 0, file_to = 0, wt = 0, rt = 1, cr = 0, cw = 0;

	if (argc != 3)
		error97();
	file_from = open(argv[1], O_RDONLY);
	if (file_from  == -1)
		error98(argv[1]);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
		error99(argv[2]);


	while (rt)
	{
		rt = read(file_from, buffer, 1024);
		if (rt == -1)
			error98(argv[1]);
		rt = read(file_from, buffer, 1024);
		if (rt > 0)
		{
			wt = write(file_to, buffer, rt);
			if (wt == -1)
				error99(argv[2]);
		}
	}
	cr = close(file_from);
	if (cr == -1)
		error100(cr);
	cw = close(file_to);
	if (cw == -1)
		error100(cw);
	return (0);
}
