#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: the number
 * @index: index of the needed bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	else
		return ((n >> index) & 1);
}
