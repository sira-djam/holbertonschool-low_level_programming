#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - impirmer une liste de caractere
 * @n: integers
 * @separator: pointer char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;
	char *string;

if (n > 0)
	{
		va_start(list, n);

		while (i < n)
		{
			string = va_arg(list, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);

			i++;
		}

		va_end(list);
	}

	printf("\n");
}