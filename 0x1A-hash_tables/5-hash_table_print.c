#include "hash_tables.h"

/**
 * hash_table_print - print has table
 * @ht: hash tables
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, n = 0;
if (ht == NULL || ht->array == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
if (n == 1)
{
printf(", ");
}
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
n = 1;
ht->array[i] = ht->array[i]->next;
}
}
printf("}\n");
}
