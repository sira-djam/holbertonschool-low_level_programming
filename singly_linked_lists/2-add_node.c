#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginningof a list
 * @head: début
 * @str: element du debut de la list
 * Return: new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int n = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
		n++;
	new_node->len = n;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
