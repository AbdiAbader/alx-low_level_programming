#include "lists.h"
#include <string.h>
/**
 *add_node - structure node pointer
 *@head: head pointer
 *@str: string
 *Return: NUll  or address of new pointer
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (strdup(str) == NULL)
{
free(new);
return (NULL);
}
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
