#include <stdio.h>
/**
 * main - new case
 *
 * codes printing all possible combination of two d/t digits
 * in ascending order and separated by comma and a space in next line
 *
 * Return: 0 Successful
 */
int main(void)
{
	int c = 0;
	int f;
	int m;
	int l;

	while (c <= 999)
	{
		f = (c / 100 + '0');
		m = (c / 10 % 10 + '0');
		l = (c % 10 + '0');
			if ((f < m) && (m < l))
			{
				putchar(f);
				putchar(m);
				putchar(l);
				if (c != 789)
				{
					putchar(',');
					putchar(' ');
				}
			}
		c++;
	}
	putchar('\n');
	return (0);
}
