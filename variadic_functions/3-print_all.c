#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - print all const format
 * @format: type d'argument
 *
 */
void print_all(const char * const format, ...)


{
tab-t spec[] ={

	{"c", pchar},
	{"i", integer},
	{"f", float},
	{"s", char*},

	};

	va_list all;
	int i = 0;

va_start(all, format);

	while (i < format)
	{
	printf(format, format[i]);
	}
	int j = 0;
	while (j < spec )
	{
	printf(spec, spec[j] + 1);
}
j++;
i++;

va_end(all);
}
