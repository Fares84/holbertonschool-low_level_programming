#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
*print_strings - function that prints strings
*@separator: pointer to a the string to print between strings
*@n: number of strings passed to the function
*Return list of strings
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list ls;
	char *str;

	va_start(ls, n);
	if (separator == 0)
		return;

	for (x = 0; x < n; x++)
	{
		str = va_arg(ls, char *);
		printf("%s", str);
		       if (separator)
			       printf("%s", separator);

	}
	va_end(ls);
	printf("\n");
}
