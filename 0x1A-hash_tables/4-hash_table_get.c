#include "hash_tables.h"

/**
 * hash_table_get - used in retrieving key value.
 *
 * @ht: hash table that is to be searched.
 * @key: key being looked for in hash table.
 * Return: key value, otherwise NULL.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
