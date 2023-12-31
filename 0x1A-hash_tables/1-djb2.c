#include "hash_tables.h"

/**
* hash_djb2 - Hash function implementing the djb2 algorithm.
* @str: The string to hash.
*
* Return: The calculated hash.
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash; /* Variable to store the hash value*/
	int c; /* Variable to store each character of the string*/

	hash = 5381; /* Initialize the hash value*/
	while ((c = *str++)) /*Loop through each character of the input string*/
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	/* Update the hash using the djb2 algorithm: hash * 33 + character*/
}
	return (hash);
}
