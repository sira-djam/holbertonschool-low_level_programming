#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - imprimer dans une liste double chainee
 * @h: pointeur
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

while (h)
{
	printf("%d\n", h->n);
	i++;
	h = h->next;
}
return (i);
}
