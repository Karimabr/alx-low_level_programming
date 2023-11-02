#include "hash_tables.h"

/**
 * key_index - Index at which a key/values.. of hash table.
 * @key: key to get the index of.
 * @size: Size of the array of the hash table.
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
