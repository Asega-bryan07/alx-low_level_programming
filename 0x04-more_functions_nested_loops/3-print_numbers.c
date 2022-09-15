#include "main.h"
/**
 * main- print numbers
 *
 * print_number - function prints from 0 to 9 in order
 * Return: 0  successful
 */
void print_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
