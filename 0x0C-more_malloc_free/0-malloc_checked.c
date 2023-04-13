#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: number of bytes
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(sizeof(unsigned int) * b);
	if (ptr ==  NULL)
		exit (98);
}
