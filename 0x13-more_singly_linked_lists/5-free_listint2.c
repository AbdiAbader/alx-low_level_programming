#include "lists.h"
/**
 *free_listint2 - free memory
 *@head: pointer hold head address
 *Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *temp, *h;
h = *head;
while (h != NULL)
{
temp = h->next;
free(h);
h = temp;
}
}
