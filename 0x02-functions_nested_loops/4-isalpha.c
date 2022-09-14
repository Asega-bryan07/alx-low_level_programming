#include "main.h"
#include <ctype.h>

/**
* _isalpha - function that checks for alphabet characters
* @c: char type letter
* Return: 0 succesful and 1 otherwise
*/
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
