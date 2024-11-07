#include "main.h"
/**
  * _puts_recursion - creer une fonction recursive
  * @s: string pointer
  */
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
