#include "main.h"

/**
 * strcpy - copy and pasting a string
 *
 * @dest: destination
 * @src: source
 * Description: copy paste a string
 * Return: destination
 */
char *strcpy(char *dest, *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	inc++;
	return (dest);
}
