#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long out;

	out = n;
	if (out > 1)
	{
		print_binary(out >> 1);
	}
	_putchar((out & 1) + '0');
}
