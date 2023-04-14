#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: void
 */
void main(void)
{
	int mul, num1, num2;
	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || isdigit(num1) || isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
}
