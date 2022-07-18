#include "lists.h"
/**
 *add_nodeint_end - add node at the end
 *@head: head of list
 *@n: number
 *Return: address of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *hold;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
if (*head == NULL)
{
temp->n = n;
temp->next = NULL;
*head = temp;
return (temp);
}
else
{
hold = *head;
while (hold->next != NULL)
hold = hold->next;
temp->n = n;
temp->next = NULL;
hold->next = temp;
return (*head);
}
}
