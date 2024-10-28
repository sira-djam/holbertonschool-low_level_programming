#include "main.h"
#include <stdio.h>

/**
  * print_most_number - imprimer une suite de 0 a 9 sauf 2 et 4
  *
  * Return always
  */

void print_most_numbers(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n == 50 || n == 52)
	{
		continue;
	}
		_putchar (n);
	}
	_putchar('\n');
	}
