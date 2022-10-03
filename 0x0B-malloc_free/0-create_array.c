#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it
 *
 * @size: size of the array
 * @c: character to insert
 * Return: '\0' if size is 0 or it fails
 * pointer to array of everythhing is normal
 */
char *create_array(unsigned int size, char c);
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);
}
