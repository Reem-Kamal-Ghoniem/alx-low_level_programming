#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of arguments it receives.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: int
 **/
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
