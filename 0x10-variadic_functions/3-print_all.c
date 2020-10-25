#include "variadic_functions.h"

/**
 *arg_c - function that received arg char
 *@ls: list of arguments passed to the functions
 */
void arg_c(va_list ls)
{
	printf("%c", va_arg(ls, int));
}

/**
 *arg_i - function that received arg integer
 *@ls: list of arguments passed to the functions
 */
void arg_i(va_list ls)
{
	printf("%i", va_arg(ls, int));
}

/**
 *arg_f - function that received arg float
 *@ls: list of arguments passed to the functions
 */
void arg_f(va_list ls)
{
	printf("%f", va_arg(ls, double));
}

/**
 *arg_s - function that received arg string (*char)
 *@ls: list of arguments passed to the functions
 */
void arg_s(va_list ls)
{
	char *s = va_arg(ls, char *);

	if (!s)
	s = "(nil)";
	printf("%s", s);
}

/**
 *print_all - function that prints anything
 *@format: format of characters (ceis)
 *Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	va_list ls;
	char *separator = "";
	ch_f ls_arg[] = {
		{'c', arg_c},
		{'i', arg_i},
		{'f', arg_f},
		{'s', arg_s},
		{'\0', NULL},
	};

	va_start(ls, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 5)
		{
			if (format[i] == ls_arg[j].c)
			{
				printf("%s", separator);
				(ls_arg[j]).f(ls);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ls);
}
