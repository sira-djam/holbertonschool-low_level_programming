#include "main.h"
#include "2-strlen.c"
/**
* print_rev - imprimer une chaine de caractere a l'envers
* @s: nombre de caractere
* Return: always
*/

void print_rev(char *s)
{
	int i;
	int longueur = _strlen('s');
	for (i = longueur -1 ; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
