#include "main.h"

/**
* times_table - a function that checks for lowercase character.
*
* Return: void.
**/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf((i * j));
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
