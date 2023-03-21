#include "main.h"

/**
* _islower - a function that checks for lowercase character.
*
* c - the input to be checked
*
* Return: void.
*/

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}
