#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *  including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: 1st pointer
 * @src: 2nd  pointer
 *
 * Description: copies the string to an array
 * Return: na
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';
	return (dest);
}
