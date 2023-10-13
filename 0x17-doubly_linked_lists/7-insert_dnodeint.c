#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: The index of the new node
 * @n: The data to be inserted
 *
 * Return: The new list
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(*&h, n);
		return (*h);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	while (i != idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (i == idx - 1 && new_node)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
