#include "main.h"
/*
 *_memset - fills a memory block with constant byte
 *
 * @s: adress of memory block
 * @b: input variable of char to be used
 * @n: the number of bytes to be filled
 * Return: A pointer to the filled memory block
 */
char _memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
