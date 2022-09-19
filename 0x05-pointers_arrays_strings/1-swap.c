#include "main.h"
/**
 * swap_int - swaps two values of two integers
 *
 * @m: first integer
 * @n: second integer
 * Return: 0
 */
void swap_int(int *m, int *n)
{
	int tmp = *m;

	*m = *n;
	*n = tmp;
}
