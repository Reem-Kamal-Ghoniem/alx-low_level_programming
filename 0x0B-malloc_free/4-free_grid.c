#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - a function that frees a 2
 * dimensional grid previously created
 * @height: no. of rows
 * @grid: pointer to 2d array
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
