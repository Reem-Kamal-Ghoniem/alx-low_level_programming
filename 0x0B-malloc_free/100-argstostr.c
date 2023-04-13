#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Write a function that concatenates 
 * all the arguments of your program.
 * @ac: no. of arg
 * @av: pointer to argv
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, x = 0;
	char *str_new;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (j = 0; j < ac; j++)
	 {	 
	 for (i = 0; av[j][i] != '\0'; i++)
		{
			size++;
		}
	 }
	str_new = (char *)malloc(size + 1);
	if (str_new ==  NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			str_new[x] = av[j][i];
			x++;
		}
		str_new[x] = '\n';
		x++;
	}
	return (str_new);
}
