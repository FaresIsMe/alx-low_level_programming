#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the list
 * @h: the list
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
		size_t i = 0;
		const listint_t *temp;

	if (h == NULL)
	return (0);
		temp = h;

		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
			i++;
		}
		return (i);
}
