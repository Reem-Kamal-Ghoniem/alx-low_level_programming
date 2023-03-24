#include "main.h"

/**
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input to be checked
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
