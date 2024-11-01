#include "main.h"
#include <stdio.h>
/**
  * puts2 - 
  * @str: pointer string
  * Return: always
  */
void puts2(char *str)
{
	int n;
	for (n = 0; str[n] <= 9; n++)
{
	if (n % 2 == 0)
	_putchar(n);
	_putchar('\n');
}
}
