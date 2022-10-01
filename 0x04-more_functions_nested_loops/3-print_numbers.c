#include "main.h"
/**
 * main- print number
 *
 * print_number - prints the numbers, from 0 to 9, followed by a new line
 * Return: 0 successful
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
