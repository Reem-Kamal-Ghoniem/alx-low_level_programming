#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x raised to the power of y.
 * @x: the number
 * @y: the power
 * Return: int
 */
int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);
		else if (y == 0)
			return (1);
		return (_pow_recursion(x, y - 1) * x);
}
