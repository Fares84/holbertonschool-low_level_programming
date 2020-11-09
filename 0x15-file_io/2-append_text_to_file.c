B#include "holberton.h"

/**
 *append_text_to_file -  function that appends text at the end of a file
 *@filename: name of the file
 *@text_content:  Null terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wt, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);


	while (text_content[i] != '\0')
		i++;
	wt = write(fd, text_content, i);

	if (wt == -1)
		return (-1);

	close(fd);
	return (1);
}
