#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of char to be used from s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int u, i, j;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; !(s1[i] == '\0'); i++)
		size1++;
	for (i = 0; !(s2[i] == '\0'); i++)
		size2++;
	if (n >= size2)
	{
		ptr = (char *)malloc(size1 + size2 + 1);
		if (ptr ==  NULL)
			return (NULL);
		for (u = 0; u < (size1); u++)
			ptr[u] = s1[u];

		for (j = size1; j < (size1 + size2); j++)
			ptr[j] = s2[j - size1];
		ptr[j] = '\0';
	}
	if (n < size2)
	{
		ptr = (char *)malloc(size1 + n + 1);
		if (ptr ==  NULL)
			return (NULL);
		for (u = 0; u < (size1); u++)
			ptr[u] = s1[u];

		for (j = size1; j < (size1 + n); j++)
			ptr[j] = s2[j - size1];
		ptr[j] = '\0';
	}
	return (ptr);
}
