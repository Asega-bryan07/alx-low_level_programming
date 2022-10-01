#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers,
 * If no number is passed to the program, print 0
 * If one of the number contains symbols that are not digits, print Error
 * followed by a new line, and return 1
 *
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 1
 */
int main(int argc, char *argv[])
{
	int a = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j] == 0)
			{
			puts("Error");
			return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}
