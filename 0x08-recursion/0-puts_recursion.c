#include "main.h"
/**
 * _puts_recursion - function that prints a string
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (!s || !*s)
	{
		_putchar('\n');
		return;
	}
	_purchar(*s);
	_puts_recursion(s + 1);
}
