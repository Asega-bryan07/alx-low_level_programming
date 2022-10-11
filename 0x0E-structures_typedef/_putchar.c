#include <unistd.h>

/**
 * _putchar - writes the writes the character c to the stdout
 *
 * @k: the character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
