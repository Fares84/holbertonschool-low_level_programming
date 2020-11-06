#include "holberton.h"

/**
 *get_endianness -  function that checks the endianness
 *Return: 1 if little endianness and 0 if big endianness
 */
int get_endianness(void)
{
	int i;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
