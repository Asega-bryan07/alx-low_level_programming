# include <stdio.h>

/**
 * main - Entry block
 *
 * Return: Always goood
 *
 */
int main(void)
{
        int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printfprintf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}


