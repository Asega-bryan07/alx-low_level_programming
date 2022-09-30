#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: argc parameter
 * @argv: array of a command listed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
