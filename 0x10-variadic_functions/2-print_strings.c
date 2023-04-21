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

	va_start(list, n);
	for (i = 1; i <= n; i++)
	{
		hold = va_arg(arg, char*);
		if (va_arg(arg, char*) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, char*));
		if (i != n - 1)0 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}
