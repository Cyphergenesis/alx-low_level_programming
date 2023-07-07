#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with
 *                  a key in a hash table.
 * @htb: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *htb, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (htb == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, htb->size);
	if (index >= htb->size)
		return (NULL);

	node = htb->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
