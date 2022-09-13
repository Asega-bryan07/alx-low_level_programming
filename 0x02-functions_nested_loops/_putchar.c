#include <unstd.h>
/**
 * _putchar - prints char to the standard output
 *@c: character thet will be printed
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
