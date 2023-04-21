#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints strings, followed by a new line.
 * @separator: the string in between
 * @n: arguments number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(ard, n);
	for (i = 1; i <= n; i++)
	{
		if (va_arg(arg, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, char*));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
