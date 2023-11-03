#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 *
 *Return: nothing!
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
