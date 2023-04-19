#include "function_pointers.h"
/*
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: ppointer to that name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f = NULL)
		return;
	f(name);
}
