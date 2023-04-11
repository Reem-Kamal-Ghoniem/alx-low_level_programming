#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints addition of arguments it receives.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: int
 **/
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i <= argc; i++)
	{
		if (!(isdigit(atoi(argv[i]))))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
			return (0);
		}
	}
}
