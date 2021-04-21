#include "search_algos.h"

/**
 *interpolation_search - function to perform interpolation search
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: the value to search for
 *Return: -1 if value is not present or an array is NULL, otherwose the index
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (size - 1);
	size_t pos;

	if (!array)
		return (-1);

	while (high >= low)
	{
		pos = low + (((double)(high - low) / (array[high]
		- array[low])) * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
