#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @s: string to print
 * Return: 0
 */
void puts_half(char *s)
{
	int j, i = 0;

	while (*(s + i))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(s + j));
		j++;
	}
	_putchar('\n');
}
