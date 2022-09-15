#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: tested character
 * Return: 0
 */
int isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
