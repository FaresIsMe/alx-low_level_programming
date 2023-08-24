#include "lists.h"
#include <stdio.h>
/**
 * print_list - printing the list
 * @head: the list
 * Return: The number of nodes
*/
size_t print_list(const list_t *h)
{
   size_t i = 0;

	while(h)
	{
		if (!h->str)
		printf("[%d] (nil)\n", h->len);
		else
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return(i);
}
