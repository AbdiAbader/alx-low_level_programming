#include "hash_tables.h"
/**
*hash_table_delete - prints all hash values with key
*@ht: struct poniter
*Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *hold;
for (i = 0 ; i < ht->size; i++)
{
temp = ht->array[i];

while (temp != NULL)
{
hold = temp->next;
free(temp->key);
free(temp->value);
free(temp);
temp = hold;
}
}
free(ht->array);
free(ht);
}
