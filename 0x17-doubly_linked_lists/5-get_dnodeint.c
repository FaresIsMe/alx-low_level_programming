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

	while (i != index && node)
	{
		node = node->next;
		i++;
	}
	if (node && (i == index))
		return (node);
	return (NULL);
}
