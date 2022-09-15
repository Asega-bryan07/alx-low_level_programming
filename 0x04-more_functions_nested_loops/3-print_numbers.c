#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function prints from 0 to 9
 *
 * Return: returns 0
 */
int print_numbers(void)
{
	int n;

	for ( n = 48; n < 57; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
