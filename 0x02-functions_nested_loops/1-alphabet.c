#include "main.h"
/**
* main - alphabet function to print a to z
*
* Description: prints the alphabet, in lowercase
* REturn: 0
*/
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
