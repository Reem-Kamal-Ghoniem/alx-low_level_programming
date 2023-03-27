#include "main.h"
#include <string.h>
/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: pointer to a string
 * Returns - void
 */
void _puts(char *str)
{
	long int i;

	for (i = 0; i <= strlen(str); i++)
	{
		_putchar(str);
	}
	_putchar(\n);
}
