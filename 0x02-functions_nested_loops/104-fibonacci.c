#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers in sequence
 *
 * Description: printing Fibonacci 98
 * Return: ok for 0
 */
int main(void)
{
	unsiggned long m = 1, n = 2, tmp, mx = 100000000, o = 0, p = 0, tmpo = 0;
	short int i = 1, initial0s;

	while (i <= 98)
	{
		if (o > 0)
			printf("%lu", o);
		initial0s = numLength(mx) - 1 - numLength(m);
		while (o > 0 && initial0s > 0)
		{
			printf("%i", 0);
			initial0s--;
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
