#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @s: string to print
 * Description: prints a string
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar(10);
}
