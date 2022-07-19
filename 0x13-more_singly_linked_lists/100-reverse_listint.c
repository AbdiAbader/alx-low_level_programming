#include "lists.h"
/**
 *reverse_listint - prints in reverse.
 *@head: - head of list linked
 *Return: address of linked list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *prev = NULL;
if (*head == NULL)
return (NULL);
else
{
while ((*head)->next != NULL)
{
current = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = current;
}
(*head)->next = prev;
return (*head);
}
}
