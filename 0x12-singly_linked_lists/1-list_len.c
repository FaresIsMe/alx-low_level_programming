#include "lists.h"
/**
 * list_len - return the nodes
 * @h: the list
 * Return: The number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
