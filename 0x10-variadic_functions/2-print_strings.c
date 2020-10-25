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

	for (x = 0; x < n; x++)
	{
		str = va_arg(ls, char *);

		if (!str)
			printf("(nil)");
		printf("%s", str);

		if (separator && x < n - 1)
			       printf("%s", separator);

	}
	printf("\n");
	va_end(ls);
}
