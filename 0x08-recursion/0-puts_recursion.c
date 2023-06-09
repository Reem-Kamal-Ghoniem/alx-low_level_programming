#include "main.h"
/**
 *_puts_recursion -  a function that prints a string,
 *followed by a new line
 *@s: array of strings
 *Returns: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*(s));
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
