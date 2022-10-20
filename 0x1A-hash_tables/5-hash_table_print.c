#include "hash_tables.h"

/**
 * hash_table_print - print has table
 * @ht: hash tables
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, n = 0;
hash_node_t *node;
if (ht == NULL || ht->array == NULL)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
if (n == 1)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
n = 1;
node = node->next;
}
}
printf("}\n");
}
