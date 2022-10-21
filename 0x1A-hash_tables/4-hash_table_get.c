#include "hash_tables.h"

/**
 * hash_table_get - getter for hash table
 * @ht: hash tables
 * @key: key
 * Return: char
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i;
hash_node_t *node;
if (key == NULL || strlen(key) < 1 || ht->array == NULL ||
ht->size == 0 || ht == NULL)
{
return (NULL);
}
i = key_index((const unsigned char *) key, ht->size);
node  = ht->array[i];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
return (node->value);
}
node = node->next;
}
return (NULL);
}
