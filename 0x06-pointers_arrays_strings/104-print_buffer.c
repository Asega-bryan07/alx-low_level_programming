#include "main.h"

/**
 * print_buffer - C function that prints the content of
 * an input number of bytes from a buffer
 * prints 10 bytes per line
 * starts with the position of first byte of line in hexadecimal (8 chars)
 * starting with 0
 * Each line shows the content of the buffer
 * Each line ends with a new line \n
 * If size is 0 or less, the output should be a new line only \n
 *
 * Return: void
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)
			printf("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j + 1]);
			else
			{
				while (++j <= i + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		i += 10;
	}
}
