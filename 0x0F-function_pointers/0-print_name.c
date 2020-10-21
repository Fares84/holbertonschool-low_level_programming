#include "function_pointers.h"

/**
 *print_name - function that prints a name
 *@name: pointer to char
 *@f: a pointer to function that receives a pointer to char
 *Return: void or NULL
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
