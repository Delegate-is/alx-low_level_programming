#include "hash_tables.h"

/**
 * key_index - giving the  index of a key.
 *
 * @key: key of the structure.
 * @size: gives that hash table's array size.
 * Return: key index in the hash table's array.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
