#include "lists.h"
/**
 *listint_len - adds length of linked list
 *@h: head of the linked list
 *Return: number of linked list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
