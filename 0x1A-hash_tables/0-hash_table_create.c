#include "hash_tables.h"

/**
 * hash_table_create - create a tables for hash
 * @size: size of tables
 * Return: hash_tables
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int i;
hash_table_t *tab = malloc(sizeof(hash_node_t));
if (tab == NULL || size == 0)
{
return (NULL);
}

tab->size = size;
tab->array = malloc(size * sizeof(hash_node_t));
if (tab->array == NULL)
{
tab->size == 0;
free(tab);
return (NULL);
}

for (i = 0; i < size; i++)
{
tab->array[i] = NULL;
}

return (tab);
}
