#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @old_size: size of the old memory
 * @new_size: size of the new memory
 * @ptr: pointer to the old array
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		else
			return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		old_size = new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		new_ptr[i] = ((char *)ptr)[i];
	return (new_ptr);
}
