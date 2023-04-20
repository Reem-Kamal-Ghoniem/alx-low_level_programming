#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: the string in between
 * @n: arguments number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
