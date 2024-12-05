#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: integers
 * Return: node of a dlistint
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *f = head;

	while (f != NULL && i < index)
		f = f->next;
	i++;
	return (f);
	return (NULL);
}
