#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
        {
	int num;
	int alph

	for (num = 0; num < 10; num++)
		putchar('0' + num);
	for (alph = 'a'; alph <= 'e'; alph++)
		putchar(alph);

	putchar('\n');
	return (0);
	}
