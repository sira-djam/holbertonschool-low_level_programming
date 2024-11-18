#include "function_pointers.h"
/**
 * print_name - pointer de fonction ecrire name
 * @name: fonction qui permet d'ecrire le nom
 * @f: pointer de fonction
 *
 */
void print_name(char *name, void (*f)(char *))

{
if (f !=0)
	f(name);
}