#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @height: no. of rows
 * @width: no. of columns
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr, *point;
	int i, j, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc((height) * sizeof(int *));

	if (ptr ==  NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *)malloc(width * sizeof(int));
		if (*(ptr + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				point = ptr[i];
				free(point);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[l][j] = 0;
		}
	}
	return (ptr);
}

}
