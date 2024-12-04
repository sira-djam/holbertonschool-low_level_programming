#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - ajouter une node à la fin de la liste
 * @head: pointer de la tete de liste
 * @str: pointer chaine de caractere
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (NULL);
	}

	while (str[n] != '\0')
		n++;
	new_node->len = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
