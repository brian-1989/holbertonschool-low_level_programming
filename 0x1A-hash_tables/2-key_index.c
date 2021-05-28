#include "hash_tables.h"

/**
 *key_index - function that gives you the index of a key.
 *@key: is the key.
 *@size: the size of hash table.
 * Return: the index where was key stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int number = 0, _index = 0;

	number = hash_djb2(key);
	_index = number % size;
	return (_index);
}
