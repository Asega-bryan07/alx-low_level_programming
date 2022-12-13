#include "main.h"

/**
 * _strncpy - function that copies a string including the
 * terminating null byte, using utmost the inputted bytes
 * number
 * if length of src is less than max byte number,
 * remainder of dest is filled with null bytes
 * works similarly to the standard library function 'strcpy'
 *
 * @dest: buffer that stores strcpy
 * @src: the source string
 * @n: max number of bytes stored
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
