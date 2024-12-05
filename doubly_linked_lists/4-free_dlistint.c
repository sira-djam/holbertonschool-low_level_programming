#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - liberer memoire
 * @head: pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f;

	while (head != NULL)
	{
		f = head;
		head = head->next;
		free(f);
	}

}