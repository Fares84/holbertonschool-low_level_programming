#include "holberton.h"

/**
 *main - program that copies the content of a file to another file
 *@argc: number of arguments passed to the program
 *@argv: array of character pointers listing all the arguments
 *Return: 0 on success and error if it fails
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int file_from, file_to, wt, rt;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]),
			exit(98);
	if (!argv[2])
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	rt = read(file_from, buffer, 1024);
	if (rt == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]),
			exit(98);
	while (rt)
	{
		wt = read(file_to, buffer, rt);
		if (wt == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[1]),
				exit(99);
		rt = read(file_from, buffer, 1024);
		if (rt == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]),
				exit(98);
	}
	file_from = close(file_from);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from),
			exit(100);
	file_to = close(file_to);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to),
			exit(100);
	return (0);
}
