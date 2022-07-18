#include "lists.h"
/**
 *add_nodeint - add node at the head
 *@head: head of linked list
 *@n: number of lists
 *Return: address of new list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *temp;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = *head;
*head = temp;
return (temp);
}
