#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: A pointer to a hash table.
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht; /* Preserve the reference to the original hash table*/
	hash_node_t *node, *tmp; /* Declare variables for nodes and temporary storage*/
	unsigned long int i; /* Counter for iteration*/
	/* Loop through the hash table's array*/
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i]; /* Get the node at the current index*/
			while (node != NULL)
			{
				tmp = node->next; /*Preserve the next node in the chain*/
				free(node->key); /* Free the allocated memory for the key*/
				free(node->value);
				free(node); /* Free the node itself*/
				node = tmp; /* Move to the next node*/
			}
		}
	}
	free(head->array); /* Free the hash table's array*/
	free(head); /* Free the hash table itself*/
}
