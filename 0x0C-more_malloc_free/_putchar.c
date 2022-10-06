#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to be printed
 *
 * Return: 1 success, -1 on error, and error is appropriately set
 */
int _putchar(char c)
{
	return (write(1 &c, 1));
}
