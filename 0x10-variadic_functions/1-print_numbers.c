#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers
 *@separator: pointer to a the string to print between numberd
 *@n: number of integers passed to the function
 *Return: list of number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ls;

	va_start(ls, n);
	if (separator == 0)
		return;

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ls, int));
		if(separator)
			printf("%s", separator);
	}
	va_end(ls);
       	printf("\n");
}
