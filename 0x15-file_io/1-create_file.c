#include "holberton.h"

/**
 *create_file -  function that creates a file
 *@filename: name of the file to created
 *@text_content: NULL terminated string to write to the file
 *Return: 1 in success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wt, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		wt = write(fd, text_content, i);
	}
	if (wt == -1)
		return (-1);

	close(fd);
	return (1);

}
