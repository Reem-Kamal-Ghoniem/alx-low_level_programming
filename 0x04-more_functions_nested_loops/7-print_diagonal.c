#include "count.h"

/**
 * print_line - draws diagonal
 * @n: input number of '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('/');
		}
		_putchar('\n');
	}
}
