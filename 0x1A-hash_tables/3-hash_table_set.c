#include "hash_tables.h"
/**
*hash_table_set - set new value to hash
*@ht: hash table struct
*@key: key to hash
*@value: value of the hash
*Return: 1 if succeeds otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int x;
hash_node_t *new , *old;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);
x = key_index((const unsigned char *)key, ht->size);
new = ht->array[x]; 
if (ht->array[x] == NULL)
{
ht->array[x] = allocate(key, value);
return (1);
}
while (new != NULL)
{
if (strcmp(new->key, key) == 0)
{
free(new->value);
strcpy(new->value, value);
return (1);
}
new = new->next;
}
old = allocate(key ,value);
if (old == NULL)
return (0);

return (0);
}
/**
*allocate: allocate new entry
*@key: key
*@value: value
*Return: new value address
*/
hash_node_t *allocate(const char *key, const char *value)
{
hash_node_t *new;
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (NULL);
new->key = strdup(key);
new->value = strdup(value);
new->next = NULL;
return (new);
}
