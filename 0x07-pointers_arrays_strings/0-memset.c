#include "main.h"
/**
*_memset - fills the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s: dest
*@b: the byte
*@n: number
*Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	for (n; n > 0; n--)
	{
		s[n - 1] = b;

	}
	return (s);
}
