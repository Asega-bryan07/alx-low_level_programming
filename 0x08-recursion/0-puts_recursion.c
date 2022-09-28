#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_purchar(s[0]);
		_puts_recursion(s + 1);
	}
}
