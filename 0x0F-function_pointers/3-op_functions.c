#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - add a and b
 *@a: first number
 *@b: second number
 *Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtract a and b
 *@a: first number
 *@b: second number
 *Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiply a and b
 *@a: first number
 *@b: second number
 *Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divide a by b
 *@a: first number
 *@b: second number
 *Return: int
 */
int op_div(int a, int b)
{	
	return (a / b);
}
/**
 *op_mod - remainder of a divided b
 *@a: first number
 *@b: second number
 *Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
