#include "function_pointers.h"
/**
 * array_iterator - iterer un tableau
 * @array: tableau
 * @size: taille de tableau
 * @action: pointeur de fonction
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size == 0)
	return;
		for (i = 0; i < size; i++)
		action (array[i]);
}