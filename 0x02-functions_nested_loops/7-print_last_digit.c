#include "main.h"

/**
* print_last_digit - a function that prints the last digit
*
* @num: the input to be checked
*
* Return: last digit.
*/

int print_last_digit(int num)
{
	int mod;

	mod = num % 10;
	if (mod < 0)
		mod = mod * -1;
	_putchar (mod +'0');
	return (mod);
}
