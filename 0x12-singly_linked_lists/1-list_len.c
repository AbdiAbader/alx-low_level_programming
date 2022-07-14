#include "lists.h"
/**
 *list_len - structure node
 *@h: head
 *Return: void
 */
size_t list_len(const list_t *h)
{
size_t c = 0;
while (h != NULL)
{
h = h->next;
c++;
}
return (c);
}
