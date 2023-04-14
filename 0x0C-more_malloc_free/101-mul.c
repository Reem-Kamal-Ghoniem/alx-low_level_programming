#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: no. of arg
 * @argv: pointer to arg
 * Return: void
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc != 3 || isdigit(num1) || isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; (argv[i][j] != '\0'); j++)
		{
			if (!(isdigit(argv[i][j])))
		{
			printf("Error\n");
			exit(98);
		}
		}
	}
		/*mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);*/
	
	return (0);
}
