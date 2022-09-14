#include <stdio.h>
/**
 * main - printing fibonacci which returns suit numbers
 * 
 * Description: Fibonacci
 * Return: 0
 */
int main(void)
{
	int c;

	unsigned long x1 = 0, x2 = 1, x3;
	for (c = 0; c < 50; c++)
	{
		x3 = x1 + x2;
		printf("%lu", x3);
		x1 = x2;
		x2 = x3;
		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
