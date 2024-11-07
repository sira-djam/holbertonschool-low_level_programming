#include "main.h"
/**
  * factorial - utilisation recursive factorial
  * @n: integers
  */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
}
	if (n == 0)
	return (1);
	else
	return (n * factorial(n - 1));
		
}
