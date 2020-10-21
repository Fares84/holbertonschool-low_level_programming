#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given as a parameter on
 *each element of an array
 *@array: pointer to an int
 *@size: variable size_t
 *@action: function that point to a function which receives an int
 *Return: void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	insigned int el;

	if (action && array)

	{
		for (el = 0; el < size; el++)
			action(array[el]);
	}

}
