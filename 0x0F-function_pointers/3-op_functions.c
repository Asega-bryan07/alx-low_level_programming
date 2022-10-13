#include "3-calc.h"



/**
 * op_add - adds a and b
 *
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a and b
 *
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *  op_mul - multiplies a and b
 * @a: first integer
 * @b: second integer
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a *b);
}

/**
 * op_div - divides a and b
 * @a: first integer
 * @b: second integer
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of a and b
 *
 * @a: first integer
 * @b: second integer
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n")
			exit(100);
	}
	return (a % b);
}
