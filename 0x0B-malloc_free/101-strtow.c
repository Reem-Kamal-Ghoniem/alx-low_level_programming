#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - a function that splits a string into words.
 * @str: array of words
 * Return: pointer to a pointer
 */
char **strtow(char *str)
{	int i, count = 0;
	char **words_count;

	if (str == NULL || str[0] == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	words_count = (char **)malloc(sizeof(char *) * (count + 1));
	if (words_count == NULL)
		return (NULL);
	return (woeds_count);
}
