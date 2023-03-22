#include "main.h"

/**
* times_table - a function that checks for lowercase character.
*
* Return: void.
**/
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (prod > 9)
				_putchar((prod / 10) + '0');
			else if (prod < 9 && prod != 0)
				_putchar(' ');
			_putchar((prod % 10) + '0');
			if (j != 9)
				_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
