#include "hash_tables.h"
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long x;
hash_node_t *current;
if (ht  == NULL || key == NULL)
return (NULL);
x = key_index((const unsigned char *)key, ht->size);
current = ht->array[x];
if (current != NULL && strcmp(current->key, key) == 0)
{
return (current->value);
}
 return (NULL);
}
