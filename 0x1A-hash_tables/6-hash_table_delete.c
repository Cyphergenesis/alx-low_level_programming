#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @htb: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *htb)
{
	hash_table_t *head = htb;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < htb->size; i++)
	{
		if (htb->array[i] != NULL)
		{
			node = htb->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
