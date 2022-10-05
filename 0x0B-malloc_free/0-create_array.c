#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 *
 * @size: size of the array
 * @c: character to insert
 * Return: '\0' if size is 0 or it fails
 * pointer to array of everythhing is normal
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
