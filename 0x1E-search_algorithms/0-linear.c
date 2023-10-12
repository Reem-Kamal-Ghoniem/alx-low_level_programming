#include "search_algos.h"
/**
 * linear_search - a function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: sorted array
 * @size: the size of the array
 * @value: value to search for
 * Return: integer for the index of the value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	while (array[index] != value)
	{
		printf("Value checked array[%ld] = [%d]\n", inc, array[inc]);
		if (array[inc] == value)
			return (inc);
		index++;
		if (index == size)
			return (-1);
	}
}
