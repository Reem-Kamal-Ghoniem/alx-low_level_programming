#include "main.h"
#include <string.h>
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to a string
 * Returns - void
 */
void _puts(char *str)
{
		while (*str)
	{
		_putchar (*str);
		str = str + 1;
	}
	_putchar ('\n');
}
