#include "main.h"
#include <stdio.h>
/**
  * print_array - imprimer un tableau
  * @a: pointe le 1er element
  * @n: taille du tableau
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
	{
			printf(", ");
		}
}
	printf("\n");
}
