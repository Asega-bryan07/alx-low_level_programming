#include "main.h"


/**
 * array_range -  a function that creates an array of integers
 *
 * @min: first integer in number
 * @max: last integer in number
 * Return: pointer to newly allocated memory, otherwise NULL
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
