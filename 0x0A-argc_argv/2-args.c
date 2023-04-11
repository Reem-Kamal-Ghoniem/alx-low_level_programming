#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all arguments it receives
 * followed by a new line.
 * @argc: number of arguments
 * @argv: array of strings of size argc
 * Return: integer
 **/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
