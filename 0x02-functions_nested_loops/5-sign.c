#include "main.h"
/**
 * print_sign - print +1, 0, or -1 for n
 *
 * @n: takes integer type input for a function
 * Return: +1 if +ve, 0 if 0, and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48 + 0);
		return (0);
	}
	else
	{
		_putchar(45 + 0);
		return (-1);
	}
}
