#include "main.h"
#include <stdio.h>
/**
  * puts2 - imprimer un caractere sur 2
  * @str: pointer string
  */
void puts2(char *str)
{
	int c = 0;
	while (str[c] != '\0')
		c++;
{
	if (c % 2 == 0)
{
	_putchar(str[c]);
}
}
	_putchar('\n');
}
