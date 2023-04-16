#include "hash_tables.h"
/**
 * key_index - This function gives yoou the index of a key
 *
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pai should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hj;

	hj = hash_djb2(key);
	return (hj % size);
}
