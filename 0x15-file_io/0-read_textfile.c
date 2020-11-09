#include "holberton.h"

/**
 *read_textfile - function that reads a text file and prints it to the POSIX
 *standard output
 *@filename: pointer to the file
 *@letters: the number of letters it should read and printthe number of letters
 *Return: the actual number of letters it coulf read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *txt;
	int wt, rt;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	txt = malloc(sizeof(char) * letters);
	if (!txt)
		return (0);

	rt = read(fd, txt, letters);

	wt = write(STDOUT_FILENO, txt, rt); /* stdout: file number of stdout; 1*/

	if (wt == -1)
		return (0);
	free(txt);
	close(fd);

	return (wt);

}
