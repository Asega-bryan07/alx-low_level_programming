#include <stdio.h>
/**
 * print_to_98 - print n to 98
 * 
 * count - counting from n to 98 in order
 * @n: input
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d", n--);
		printf("%d\n");
	}
	else
	{
		while (n < 98)
			printf("%d", n++);
		printf("%d\n");
	}
}
