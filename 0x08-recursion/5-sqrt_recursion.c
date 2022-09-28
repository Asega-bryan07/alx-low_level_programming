#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to be squared
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, x));
}
/**
 *find_sqrt - returns the square root of a number
 *
 * @n: test number
 * @x: squared number
 * Return: the square root of n
 */
int find_sqrt(int n, int x)
{
	if ((x * x / 2) == n)
		return (x);
	if (x == n / 2)
		return (-1);
	return (find_sqrt(n, x + 1));
}
