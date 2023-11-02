#include "hash_tables.h"

/**
 * key_index - gives you the index of the key
 * @key: is the key
 * @size: The size of the array
 *
 * Return: index number of the key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
