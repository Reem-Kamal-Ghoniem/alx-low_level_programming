#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;
	/*num1 = (int *)argv[1];*/
	/**num2 = (int *)argv[2];*/

	if (argc != 3 || isdigit(num1) || isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
