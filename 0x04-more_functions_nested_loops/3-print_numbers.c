#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function prints from 0 to 9
 *
 * Return: returns 0
 */
int print_numbers(void)
{
	int a;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
