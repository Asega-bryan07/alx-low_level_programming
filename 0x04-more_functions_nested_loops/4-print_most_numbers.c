#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
