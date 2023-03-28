#include "main.h"

/**
 * puts_half - function with one argument
 * @str: char type
 *
 * Description: prints half of a string
 * Return: na
 */
void puts_half(char *str)
{
	int count = 0 ;
	int i;

	while(*str != '\0')
	{
		count++;
	}

	for (i = 0; i <= count/2; i++)
	{
		_putchar(str[i]);
	}
}
