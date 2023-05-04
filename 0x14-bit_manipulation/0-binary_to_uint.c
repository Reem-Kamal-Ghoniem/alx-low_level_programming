#include "main.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 *@b: the input binary number
 *Return: the convertion to unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int index, base = 1;
	unsigned int unit;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	while (index)
	{
		unit += ((b[index - 1] - '0') * base);
		base *= 2;
		index--;
	}
	return (unit);
}
