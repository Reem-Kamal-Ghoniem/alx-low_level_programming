#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *_puts_recursion -  a function that prints a string,
 *followed by a new line
 *@s: array of strings
 *Returns: void
 */
 void _puts_recursion(char *s)
{

	_putchar(*s);
	s++;
	_puts_recursion(s)

	_putchar('\n')
}
