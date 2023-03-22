#include "main.h"
/**
* _abs - perform absolute
*
* @c: the input to be checked
*
* Return: abolute
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
		return (c);
	else
		return (0-c);
}
