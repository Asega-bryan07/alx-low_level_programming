#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @num: number to be squared
 * @root: square root of a number
 * Return: the square root of num
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (num < 0)
		return (-1);
	if (num == 1)
		return (1);
	return (find_sqrt(num, root));
}
/**
 *find_sqrt - returns the square root of a number
 *
 * Return: the square root of num
 */
int find_sqrt(int num, int root)
{
	if ((root * root / 2) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}
