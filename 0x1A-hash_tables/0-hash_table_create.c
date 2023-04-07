#include "hash_tables.h"
#include <stdlib.h>
/**
 * Function to create a hash table: hash_table_create.
 * 
 * @ size: size of array
 * Return: a pointer to this new hash table.
 * Otherwise; return NULL.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;
    unsigned long int i;

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);
    new_table->size = size;
    new_table->array = malloc(size * sizeof(hash_node_t *));
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }
    for (i = 0; i < size; i++)
	new_table->array[i] = NULL;
    return (new_table);
}
