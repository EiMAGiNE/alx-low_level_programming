#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: parameter for the size of the array
 *
 * Return: pointer to the newly created hash table, or
 *	- NULL, if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*Initialize hash_table and size*/
	hash_table_t *ht = NULL;
	unsigned long int i = 0;

	/*Allocate memory for hash_table*/
	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	/*Set the size of hash_table*/
	ht->size = size;

	/*Allocate memory for the array of pointers*/
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/*Initialize each element of the array with NULL*/
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
