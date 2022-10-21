#include "hash_tables.h"

/**
 * hash_table_delete - delete for hash tables
 * @ht: hashtables
*/
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *del;
    if (ht == NULL || ht->array == NULL || ht->size == 0)
    {
        return;
    }
    
    for (i = 0; i < ht->size; i++)
    {
        while (ht->array[i] != NULL)
        {
            del = ht->array[i];
            ht->array[i] = ht->array[i]->next;
            free(del->key);
            free(del->value);
            free(del);
        }
        free(ht->array[i]->key);
        free(ht->array[i]->value);
        free(ht->array[i]);
    }
    free(ht->array);
    ht->array = NULL;
    ht->size = 0;
    free(ht);
}
