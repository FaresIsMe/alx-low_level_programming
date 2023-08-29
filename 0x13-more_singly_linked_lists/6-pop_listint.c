#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - idk
 *@head : the head to be removed
 *
 *Return: the n
*/
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
	return (0);

	temp = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (temp);
}
