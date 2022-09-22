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
	unsigned long index;
	unsigned long size;
	hash_node_t *new = NULL;

	/* return 0 if table, key or value is NULL */
	if (ht  == NULL || key == NULL || value == NULL)
		return (0); /* return 0 on failure */

	/* use key_index and determine size of table */
	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	/* allocate space for new node */
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0); /* return 0 on failure */

	/* assign data for new node */
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1); /* return 1 on success */
}
