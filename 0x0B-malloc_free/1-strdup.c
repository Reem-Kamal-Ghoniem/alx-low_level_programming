#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * and initializes it with a specific char.
 * @str: a string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int u, i;
	int size = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; !(str[i] == '\0'); i++)
		size++;
	ptr = (char *)malloc(size + 1);
	if (ptr ==  NULL)
	{
		return (NULL);
	}
	for (u = 0; u < size; u++)
		ptr[u] = str[u];
	return (ptr);
}
