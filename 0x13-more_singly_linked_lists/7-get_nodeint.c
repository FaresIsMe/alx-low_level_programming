#include "lists.h"
/**
 * get_nodeint_at_index - point at the node you want then return it
 * @head: the list
 * @index: whatever
 * Return: The indexed node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	return (NULL);
	temp = head;

	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
