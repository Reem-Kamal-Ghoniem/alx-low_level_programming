#include "main.h"
#include <stdio.h>
/*
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: ppointer to that name
 * Return - void
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		printf("%c", (*f)(i));
		i++;
	}

}
