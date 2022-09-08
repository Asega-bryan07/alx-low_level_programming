# include <stdio.h>

/**
 * main - Entry block
 *
 * Return: Always goood
 *
 */
int main(void)
{
        int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(int);
	int d = sizeof(int);
	int e = sizeof(float);

	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", b);
	printf("Size of an int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", e);
	return (0);
}


