#include "lists.h"

/**
 * print_dlistint - prints a list
 * @h: The list's head
 *
 * Return: number of nodes printed
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
