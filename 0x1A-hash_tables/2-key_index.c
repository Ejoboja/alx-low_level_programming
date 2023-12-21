#include "hash_tables.h"

/**
* key_index - Calculate the index for storing a key/value pair in a hash table array.
* @key: The key to determine the index for.
* @size: The size of the hash table's array.
*
* Return: The computed index of the key in the array.
* Description: Uses the djb2 hashing algorithm to derive the index for the given key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
