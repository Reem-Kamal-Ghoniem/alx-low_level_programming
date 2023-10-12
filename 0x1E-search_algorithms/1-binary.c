#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in an
 * array of integers using the Linear linear algorithm
 * @array: sorted array
 * @size: the size of the array
 * @value: value to search for
 * Return: integer for the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t min = 0;
	size_t max = size - 1;
	size_t i, mid;

	if (array == NULL)
		return (-1);
	while (min <= max)
	{
		mid = (min + max) / 2;
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[min] == value)
			return mid;
		else if (array[mid] < value)
			min = mid + 1;
		else
			max = mid - 1;
	}
	return (-1);
}
