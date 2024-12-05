#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: pointer
 * @n: integers
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		return (NULL);
	}
	i = *head;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = (*head);
	if (i)
		i->prev = new_node;
	(*head) = new_node;
	return (*head);
}
