#include "3-calc.h"

/**
 * op_add - calculates the sum of the integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the diference between two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integers
 *
 */
int op_mod(int a, int b)
{
	return (a % b);
}
