#include "hash_tables.h"

/**
 * hash_table_create - It craets a hash table
 * @size: The size of the table
 *
 * Return: The new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		fprintf(stderr, "Error: malloc function failed\n");
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t) * size);
	if (new_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc function failed\n");
		return (NULL);
	}

	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
