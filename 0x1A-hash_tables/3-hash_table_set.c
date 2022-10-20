#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int  i;

    if (key == NULL)
    {
        return (0);
    }

    i = hash_djb2(key);
    if (ht->array[i] == NULL)
    {
        ht->array[i]->key = key;
        ht->array[i]->value = strdup(value);
    }
    else
    {
        ht->array[0]->key = key;
        ht->array[0]->value = strdup(value);
    }
    return (1);
}
