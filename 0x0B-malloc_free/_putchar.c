#include <unistd.h>

/**
* _putchar - writes the character to stdout
*
*@c: character to print
*Return: 1 on success, -1 on error and error is appropriately set
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
