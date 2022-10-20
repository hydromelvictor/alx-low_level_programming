#include "hash_tables.h"

/**
 * hash_table_create - create a tables for hash
 * @size: size of tables
 * Return: hash_tables
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *tab = malloc(sizeof(hash_node_t));
if (tab == NULL)
{
return (NULL);
}

tab->size = size;
tab->array = NULL;
return (tab);
}
