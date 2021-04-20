#include "search_algos.h"

/**
 *binary_search - function of binary search for value in a sorted array of int
 *@array: pointer to the first element of the array to search in
 *@size: number of element in the array
 *@value: value to search for
 *Return: -1 if value is not present or an array is NULL, otherwose the index
 */
int binary_search(int *array, size_t size, int value)
{
	int right = size - 1;
	int left = 0;
	int mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
		}
	return (-1);
}
