#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserer une node dans un index a une placeé
 * @idx: integers
 * @n: integers
 * @h: pointer
 * Return: new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node, *curr;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		curr = *h;
		i = 1;
		while (curr)
		{
			if (i == idx)
			{
				if (!curr->next)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node)
					{
						node->n = n;
						node->next = curr->next;
						node->prev = curr;
						curr->next->prev = node;
						curr->next = node;
					}
				}
				break;
			}
			curr = curr->next;
			i++;
		}
	}
	return (node);
}
