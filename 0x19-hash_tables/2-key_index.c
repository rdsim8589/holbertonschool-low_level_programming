#include "hash_tables.h"
/**
 * key_index - Take the hash key and convert it to an index
 * @key: the hash key
 * @size: the size of the hash table
 *
 * Return: the index of where the hash key/value is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
