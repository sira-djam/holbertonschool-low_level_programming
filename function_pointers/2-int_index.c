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
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				return (i);
				i++;
			}
		}
	}
	return (-1);
}
