#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: Head of the list pointer.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end, *temp = *head;

	new_end = malloc(sizeof(dlistint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		new_end->prev = temp;
		new_end->next = new_end;
	}
	else
	{
		*head = new_end;
		new_end->prev = NULL;
	}
	return (new_end);
}
