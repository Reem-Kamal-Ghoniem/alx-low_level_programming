#include "main.h"
/**
 * clear_bit - a function that sets the value of
 * a bit to 0 at a given index.
 * @n: input number
 * @index: index to be cleared
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	if (index > 31)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
