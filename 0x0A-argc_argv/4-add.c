#include <stdio.h>
#include <stdlib.h>
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
	int result = 0, num, i, j, k;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	for k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("d\n", sum);
	return (0);
}
