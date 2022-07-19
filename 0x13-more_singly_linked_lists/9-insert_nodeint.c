#include "lists.h"
/**
 *insert_nodeint_at_index - insert list at index
 *@head : head of list
 *@idx: index
 *@n: data of the list
 *Return: address of new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp, *hold;
unsigned int i = 0;
if (head == NULL)
return (NULL);
hold = *head;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (idx == 0)
{
temp->next = hold;
*head = temp;
return (temp);
}
while (i < idx - 1)
{
if (hold  == NULL || hold->next == NULL)
return (NULL);
hold = hold->next;
i++;
}
temp->next = hold->next;
hold->next = temp;
return (temp);
}
