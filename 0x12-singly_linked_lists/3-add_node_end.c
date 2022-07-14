#include "lists.h"
#include <string.h>
/**
 *add_node_end - structure node pointer
 *@head: head pointer
 *@str: string
 *Return: NUll  or address of new pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
list_t *new, *temp;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (strdup(str) == NULL)
{
free(new);
return (NULL);
}
while (str[i] != '\0')
i++;
new->str = strdup(str);
new->len = i;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
}
return (*head);
}
