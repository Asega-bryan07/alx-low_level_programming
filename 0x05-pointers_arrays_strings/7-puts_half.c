#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string to print
 * Return: 0
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}
/**
 * _strlen - returns length of the string
 *
 * @s: string
 * Return: the length of the string given
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
