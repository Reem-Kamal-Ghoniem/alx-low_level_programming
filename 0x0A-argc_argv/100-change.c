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
	int money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);

	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (money != 0)
		{
			if (money >= 25)
				money = money - 25, coins++;
			else if (money >= 10 && money < 25)
				money = money - 10, coins++;
			else if (money >= 5 && money < 10)
				money = money - 5, coins++;
			else if (money >= 2 && money < 5)
				money = money - 2, coins++;
			else if (money == 1)
				money = money -  1, coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
