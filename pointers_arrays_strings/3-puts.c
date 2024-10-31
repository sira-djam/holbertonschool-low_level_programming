#include "main.h"
/**
  * _puts - imprimer une chaine de caractere
  * @str: chaine de caractere
  */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
