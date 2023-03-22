#include "main.h"

/**
* print_sign - a function that checks for lowercase character.
*
* @n: the input to be checked
*
* Return: depend on n
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
