#include "lists.h"
/**
 * pop_listint - idk
 *@head : the head to be removed
 *
 *Return: the n
*/
int pop_listint(listint_t **head)
{
	int temp;

	if (head == NULL)
	return (0);

	temp = (*head)->n;
	*head = (*head)->next;

	return (temp);
}
