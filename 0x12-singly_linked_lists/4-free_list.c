#include "lists.h"
/**
 *free_list - frees linked list memory
 *@head: top linked list
 *Return: Void
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
