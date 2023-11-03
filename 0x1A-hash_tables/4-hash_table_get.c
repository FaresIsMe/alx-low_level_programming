#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @key: is the key
 * @ht:  is the hash table
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];

	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
