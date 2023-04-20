#include <stdio.h>
#include <stdlib.h>
/**
  * main - function
  * @argc: number of arguments
  * @argv: pointer to array
  * Return: int
  */
int main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Error\n"), exit(1);

	if (atoi(argv[1]) < 0)
		printf("Error\n"), exit(2);
}
