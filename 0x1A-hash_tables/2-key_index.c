#include "hash_tables.h"

/**
 * key_index - key for hash function
 * @key: key
 * @size: size
 * Return: unsigned long int
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
