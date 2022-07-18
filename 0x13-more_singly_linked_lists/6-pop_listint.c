#include "lists.h"
/**
 *pop_listint - free head of the linked list
 *@head: pointer to the first head
 *Return:  data in the head
 */
int pop_listint(listint_t **head)
{
int k;
listint_t *temp;
if (*head == NULL)
return (0);
temp = *head;
k = temp->n;
*head = (*head)->next;
free(temp);
return (k);
}
