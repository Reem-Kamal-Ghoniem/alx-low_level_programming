#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers.
 * @max: end of the range
 * @min: start of the range
 * Return: pointer
 */
int *array_range(int min, int max)
{

	int *ptr;
	int loop = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(max - min + 1);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[loop] = min;
		min++;
		loop++;
	}
	return (ptr);
}
