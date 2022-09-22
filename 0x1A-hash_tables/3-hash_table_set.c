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
old = ht->array[x]; 
while (old != NULL)
{
if (strcmp(old->key, key) == 0)
{
free(old->value);
strcpy(old->value, value);
return (1);
}
old = old->next;
}
new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(old->value, value);
	new->next = ht->array[x];
	ht->array[x] = new;

	return (1);
}
