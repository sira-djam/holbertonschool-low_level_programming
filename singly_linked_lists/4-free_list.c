#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - free memory
 * @head: tete de liste
 */
void free_list(list_t *head)

{
	list_t *f;
	{
	if (head == NULL)
	return;
	}
	while (head != NULL)
	{
    f = head;
    head = head->next;
    free(f);
	}
	head = NULL;
}