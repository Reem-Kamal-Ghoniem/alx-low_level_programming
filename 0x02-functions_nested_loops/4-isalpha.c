#include "main.h"

/**
* _isalpha - a function that checks for lowercase character.
*
* @c: the input to be checked
*
* Return: void.
*/

int _isalpha(int c)
{
	if ('A' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
