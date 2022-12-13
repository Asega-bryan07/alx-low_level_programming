#include "main.h"
/**
 * _isupper - checks if a character is uppercase or not
 * @c: character being tested
 * Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
