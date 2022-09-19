#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @s: string to print
 * Return: 0
 */
void puts_half(char *s)
{
	int i, len = _strlen(s);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(*(s + i));
	_putchar(10);
}
