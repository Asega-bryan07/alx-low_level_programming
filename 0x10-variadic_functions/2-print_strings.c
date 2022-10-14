#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - a function that prints strings
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arglist;

	va_list(arglist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
