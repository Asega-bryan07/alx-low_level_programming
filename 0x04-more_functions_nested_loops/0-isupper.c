#include "main.h"
/**
 * _isupper - checks if a char is in uppercase or not
 * @c: char being tested
 * Return: 1, or 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
