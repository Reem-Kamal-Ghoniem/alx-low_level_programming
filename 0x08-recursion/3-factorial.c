#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the input number
 * Return: int
 */
int factorial(int n)
{
	int next = 0, out = 0, fact = 0;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	fact = factorial(n - 1);
	out = n * fact;
	return (out);
}

