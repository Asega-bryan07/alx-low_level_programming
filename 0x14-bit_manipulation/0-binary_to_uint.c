#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string to be checked
 *
 * Return: the converted number, or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);
}
