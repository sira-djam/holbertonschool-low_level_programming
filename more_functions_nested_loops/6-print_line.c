#include "main.h"
/**
  * print_line - realiser des lignes avec une fonction
  * @n: number stock
  * Return always
  */
void print_line(int n)
{
	int a;

	if (n <=  0)
{
	_putchar('\n');
}
	else
{
	for (a = 0; a < n; a++)
{
	_putchar('_');
}
_putchar('\n');
}
}
