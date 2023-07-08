#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: parameter for the key
 * @size: parameter for the size of the array of the hash table
 *
 * Return: the index of the key/value pair
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
