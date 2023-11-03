#include "hash_tables.h"

/**
 * hash_table_print - prints the table contents
 * @ht: the table
 *
 * Return: noting
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			first = 0;
			head = head->next;
		}
	}
	printf("}\n");
}
