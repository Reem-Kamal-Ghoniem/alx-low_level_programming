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
	int u, i;
	int size1 = 0;
	int size2 = 0;
	char *ptr;
	char[] str;

	for (i = 0; !(s1[i] == NULL); i++)
		size1++;
	for (i = 0; !(s2[i] == NULL); i++)
                size2++;
	ptr = (char *)malloc(size1 + size2 + 2);
	if (ptr ==  NULL)
	{
		return (NULL);
	}
	str = s1 + s2;
	for (u = 0; u < (size1 + size2); u++)
		ptr[u] = str[u];
	return (ptr);
}
