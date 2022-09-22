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
hash_node_t *new;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = value_copy;
			return (1);
		}


	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
