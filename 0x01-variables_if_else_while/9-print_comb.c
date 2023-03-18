#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
		putchar(' ');
		if (num < 9)
			putchar(',');
	}

	putchar('\n');
	return (0);
	}
