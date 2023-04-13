#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @size: size of each element
 * @nmemb: number of elements
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return NULL;
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
