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
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{	
		for (j = 0; argv[j][j] != '\0'; j++)
		{
			if (!(isdigit(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}	
		
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
