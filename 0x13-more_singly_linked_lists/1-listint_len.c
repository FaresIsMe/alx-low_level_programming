#include "lists.h"
/**
 *listint_len - prints the list
 * @h: the list
 *
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
