#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 *
 *Description: computes absolute value of an integer
 * @n: takes in integer type input for a functio
 *
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n < 0)

		n = (-1) * n;
	return (n);
}
