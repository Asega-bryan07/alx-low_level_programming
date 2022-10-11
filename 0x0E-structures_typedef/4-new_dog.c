#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string pointed by the src
 *
 * @dest: the buffer storing the string copy
 * @src: the source string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new do
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
