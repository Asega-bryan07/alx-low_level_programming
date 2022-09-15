#include "main.h"

/**
 * main- print numbers
 *
 * print_numbers - function prints from 0 to 9
 * Return: returns 0
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
