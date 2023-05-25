#include "main.h"
/**
*_memcpy - copies n bytes from src to dest
*@dest: to
*@src: from
*@n:number of bytes
*Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

