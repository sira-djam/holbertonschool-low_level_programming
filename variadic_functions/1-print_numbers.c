#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -
 * @n: integers
 * @separator: is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);

	while (i < n)
	{
		printf("%d", va_arg(list, int));

		{
		if (separator != NULL && i != n - 1)
		printf("%s", separator);
		}

		i++;

	}

	printf("\n");
	va_end(list);
}
