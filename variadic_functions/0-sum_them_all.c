#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - somme de tous les entiers
 * @n: integers
 * Return : result
 */
int sum_them_all(const unsigned int n, ...)
{
int result = 0;
unsigned int i = 0;

va_list ap;
va_start(ap, n);


if (n == 0)
return (0);

while (i < n)
{
	result += va_arg(ap, int);
	i++;
}
va_end(ap);
return (result);
}
