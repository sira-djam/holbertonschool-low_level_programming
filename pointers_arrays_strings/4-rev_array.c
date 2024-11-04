#include "main.h"
/**
  * reverse_array - inverser les nombres entier dans un tableau
  * @a: pointer element de depart
  * @n: le nombre d'element du tableau
  */
void reverse_array(int *a, int n)
{
	int arr;
	int end = n - 1;
	int start = 0;

	while (start < end)
	{
		arr = a[start];
		a[start] = a[end];
		a[end] = arr;
			start++;
			end++;
		}
}
