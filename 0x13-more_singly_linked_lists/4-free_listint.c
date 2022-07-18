#include "lists.h"
/**
 *free_listint - free allocated memory
 *@head: head of the linked list
 *Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp  = head->next;
free(head);
head = temp;
}
}
