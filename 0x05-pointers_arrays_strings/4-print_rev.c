#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @b: string to reverse
 * Return:0
 */
void print_rev(char b)
{
	int len = strlen(b);

	while (len--)
		putchar(*(b + len));
	putchar(10);
}
