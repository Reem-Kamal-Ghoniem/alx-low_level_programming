#include "main.h"
/*
 * int_index - a function that searches for an integer
 * @array: array name
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Returns - int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-);
	if (array == NULL)
		return (-1);

	for (i = 0; i <= size; i++)
		{
			if (*cmp(array[i]))
				return i;
		}
	return (-1);
