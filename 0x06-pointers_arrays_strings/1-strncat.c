#include "main.h"

/**
 * _strncat - concatenates two strings and adds number of bytes
 *
 * @src: string to be completed at dest end
 * @dest: string to be appended upon
 * @n: integer parameter to compare index to
 * Return: new string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	dest_len = 0;
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
