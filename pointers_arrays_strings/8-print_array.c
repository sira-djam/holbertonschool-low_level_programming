#include "main.h"
#include <stdio.h>
/**
  * print_array - imprimer un tableau
  * @a: pointe le 1er element
  * @n: taille du tableau
  * @i: valeur de n
  */
  void print_array(int *a, int n)

{
	int i;
	for (i = 0; i < n ; n++)
	{
		printf("%d n" , a[i]);
	if (i != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
