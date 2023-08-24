#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free
 * @head: whatever
 * return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
