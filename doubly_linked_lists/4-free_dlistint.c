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
	{
		if (head == NULL)
		return;
	}
	while ((f = head) != NULL)
	{
		head = head->next;
		head = NULL;
		free(f);
	}

}