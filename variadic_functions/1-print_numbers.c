#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers -
 * @n: integers
 * @separator: is the string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	char *sep;
	unsigned int i = 0;
	va_list numb;

	va_start(numb, n);

	if (separator == ',')

	while (i < n )

	printf("%d", va_arg(numb, int));
	





}