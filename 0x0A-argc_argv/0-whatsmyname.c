#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints its name,
 * followed by a new line.
 * @argc: number of arguments
 * @argv: array of strings of size argc
 * Return: integer
 **/
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
