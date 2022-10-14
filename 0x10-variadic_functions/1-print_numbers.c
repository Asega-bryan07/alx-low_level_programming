#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: separator between two lines
 * @n: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arglist;

	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arglist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arglist);
}
