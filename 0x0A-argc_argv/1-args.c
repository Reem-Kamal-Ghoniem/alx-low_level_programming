#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments
 * passed into it followed by a new line.
 * @argc: number of arguments
 * @argv: array of strings of size argc
 * Return: integer
 **/
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", argc);
	return (0);
}
