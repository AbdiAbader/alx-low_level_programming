#include "lists.h"
/**
 *get_nodeint_at_index - get node index
 *@head: head of linked lists
 *@index: index of list
 *Return: index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
if (head == NULL)
return (NULL);
else
{
while (head != NULL)
{
if (i == index)
break;
head = head->next;
i++;
}
}
return (head);
}
