#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer the node's head
 *
 *
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
