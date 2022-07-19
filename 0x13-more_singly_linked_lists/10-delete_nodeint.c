#include "lists.h"
/**
 *delete_nodeint_at_index - delete list at index
 *@head : head of list
 *@index: index
 *Return: address of new list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *hold;
unsigned int i = 0;
if (*head == NULL)
return (-1);
hold = *head;
if (index == 0)
{
*head = (*head)->next;
free(hold);
return (1);
}
while (i < index - 1)
{
if (hold->next == NULL)
return (-1);
hold = hold->next;
i++;
}
temp = hold->next;
hold->next = temp->next;
free(temp);
return (1);
}
