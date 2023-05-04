#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, index;
	char *bin;

	for (i = 0; n != 1; i++)
	{
		if (n % 2)
			bin[i] = '1';
		else
			bin[i] = '0';
	}
	for ( index = i; index >= 0; index--)
		_putchar(bin[index] + '0');
}
