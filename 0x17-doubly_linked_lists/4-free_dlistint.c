#include "lists.h"
/**
 * free_dlistint - it frees the list
 * @head: pointer the node's head
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
