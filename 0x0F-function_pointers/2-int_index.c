#include <stdio.h>

/**
 *int_index - function that searches for an integer
 *@array: array pointer to int
 *@size: number of element in the array
 *@cmp: pointer to a function that receives an int
 *Return: int
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int el;
	int index;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (el = 0; el < size; el++)
		{
			index = cmp(array[el]);
			if (index > 0)
				return (el);
		}
	}
	return (-1);


}
