#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: pointer to the node's head
 * @index: The index of the node
 *
 *
 * Return: The node required.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));

	while (i != index)
	{
		head = head->next;
		i++;
	}
	node = head->next;
	node->n = head->n;
	return (node);
}
