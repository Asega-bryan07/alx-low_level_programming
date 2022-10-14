#include "variadic_functions.h"
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

	if (separator == NULL)
		separator = "";

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arglist, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arglist);
}
