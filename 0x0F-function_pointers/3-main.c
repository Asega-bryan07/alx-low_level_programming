#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operational tasks
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int atgc, char * argv[])
{
	int a, b, c
		int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
			exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_function(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = f(a, b);
	printf("%d\n", c);
	return (0);
}
