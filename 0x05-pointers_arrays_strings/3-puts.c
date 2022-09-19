#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to print
 * Description: prints a string
 * On success: return no error
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
