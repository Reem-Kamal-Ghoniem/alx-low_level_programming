#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the name of the file it was compiled from 
 * Description: prints the name of the file
 * return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
