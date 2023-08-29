#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insertion
 * @head: idk
 * @idx: idk
 * @n: idk
 * Return: the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *new_node;

	if (head == NULL || *head == NULL)
	return (NULL);

	temp = *head;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx - 1)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node = temp;
	new_node->n = n;
	new_node->next = temp->next;

	return (new_node);
}
