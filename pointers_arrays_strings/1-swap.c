#include "main.h"
/**
  * swap_int - inverser deux entiers
  * @a: un entier
  * @b: deuxieme entier
  */
void swap_int(int *a, int *b)
{
int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
