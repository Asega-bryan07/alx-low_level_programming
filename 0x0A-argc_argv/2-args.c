#include <stdio.h>

/**
 *  main - program that prints the number of arguments passed into it
 *
 *  @argc: argc parameter
 *  @argv: array of a command listed
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
