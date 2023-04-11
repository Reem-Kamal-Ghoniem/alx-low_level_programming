#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments
 * @argv: array of strings
 * Return: int
 **/
int main(int argc, char **argv)
{
	int coins = 0;

	if (argc !== 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1] < 0)
		printf("0\n");
	else
	{
		while (atoi(argv[1]) != 0)
		{
		if (atoi(argv[1]) >= 25)
			atoi(argv[1]) -= 25, coins++;
		else if (atoi(argv[1]) >= 10 && atoi(argv[1]) < 25)
			atoi(argv[1]) -= 10, coins++;
		else if (atoi(argv[1]) >= 5 && atoi(argv[1]) < 10)
			atoi(argv[1]) -= 5, coins++;
		else if (atoi(argv[1]) >= 2 && atoi(argv[1]) < 5)
			atoi(argv[1]) -= 2, coins++;
		else (cents == 1)
			atoi(argv[1]) -= 1, coins++;
		}
	}
}
