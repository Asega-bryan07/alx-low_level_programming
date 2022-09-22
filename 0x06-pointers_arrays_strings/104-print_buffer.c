#include "main.h"
#include <stdio.h>

/**
 * print_line - prints bytes of a buffer from an input number
 * prints 10 bytes per line
 * starts with the position of first byte of line in hexadecimal (8 chars)
 * starting with 0
 * Each line shows the content of the buffer
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 *
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to prin
 * Return: void
 */
void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}
/**
 * print_buffer - prints a buffer with
 * @b: parameter
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
