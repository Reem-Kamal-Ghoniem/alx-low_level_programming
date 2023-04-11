#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the needed size of array
 * @c: a char to initialize the array with it
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
