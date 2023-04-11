#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int u, i, j;
	int size1 = 0;
	int size2 = 0;
	char *ptr;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; !(s1[i] == '\0'); i++)
		size1++;
	for (i = 0; !(s2[i] == '\0'); i++)
		size2++;
	ptr = (char *)malloc(size1 + size2 + 1);
	if (ptr ==  NULL)
	{
		return (NULL);
	}
	
	for (u = 0; u < (size1); u++)
		ptr[u] = s1[u];
	
	for (j = size1; j < (size1 + size2); j++)
		ptr[j] = s2[j - size1];
	
	return (ptr);
}
