#include "function_pointers.h"
/**
 * int_index -  recherche d'un nombre entier
 * @array: pointer initialise tableau
 * @size: taille du tableau
 * @cmp: pointer de fonction format int
 * Return: always
 */
int int_index(int *array, int size, int (*cmp) (int))
{
	int i;

	if (size <= 0)
	{
	return (-1);
	}
	for (i = 0; i < size; i++)
	if (cmp(array[i]) != 0)
	return (i);

	return (-1);
}
