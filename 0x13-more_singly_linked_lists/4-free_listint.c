#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free
 * @head: whatever
 * return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
