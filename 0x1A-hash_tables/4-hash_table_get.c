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
    for (i = 0; i < ht->size; i++)
    {
        if (strcmp(ht->array[i]->key, key) == 0)
        {
            return (ht->array[i]->value);
        }
    }

    return (NULL);
}
