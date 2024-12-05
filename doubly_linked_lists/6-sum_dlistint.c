#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - somme de la liste chainee
 * @head: pointer
 * Return: always
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
	node = node->next;
	return (sum);
	}

	return (0);
}