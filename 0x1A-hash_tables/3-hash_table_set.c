#include "hash_tables.h"

/**
 * add_node - add new node in hash tables
 * @key: key
 * @value: value
 * Return: hash_node_t
*/
hash_node_t *add_node(const char *key, const char *value)
{
hash_node_t *new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
return (NULL);
}

new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (NULL);
}
new->value = strdup(value);
if (new->value == NULL)
{
free(new->key);
free(new);
return (NULL);
}
new->next = NULL;
return (new);
}


/**
 * hash_table_set - set hashage
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int cle;
hash_node_t *node, *new;
if (key == NULL || strlen(key) < 1 || value == NULL ||
ht->array == NULL || ht->size == 0)
{
return (0);
}
cle = key_index((const unsigned char *) key, ht->size);
node = ht->array[cle];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
node->value = strdup(value);
if (node->value == NULL)
{
return (0);
}
return (1);
}
node = node->next;
}

new = add_node(key, value);
new->next = ht->array[cle];
ht->array[cle] = new;
return (1);
}
