#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: input number
 * @index: index of the bit to be set
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n = NULL)
		return (-1);
	if (index > 63)
		return (-1);
	return (*n | (1 << index));
}
