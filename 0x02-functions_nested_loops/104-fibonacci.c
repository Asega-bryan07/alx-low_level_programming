#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers in sequence
 *
 * Description: printing Fibonacci 98
 * Return: ok for 0
 */
int main(void)
{
	unsigned long m = 1, n = 2, tmp, mx = 100000000, o = 0, p = 0, tmpo = 0;
	short int i = 1, initialos;

	while (i <= 98)
	{
		if (o > 0)
			printf("%lu", o);
		initialos = num(mx) - 1 - num(m);
		while (o > 0 && initialos > 0)
		{
			printf("%i", 0);
			initialos--;
		}
		printf("%lu", m);
		tmp = (m + n) % mx;
		tmpo = o + p + (m + n) / mx;
		m = n;
		o = p;
		n = tmp;
		p = tmpo;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}
