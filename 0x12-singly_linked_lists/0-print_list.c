#include "lists.h"
/**
 *print_list - structure node
 *@h: head
 *Return: void
 */
size_t print_list(const list_t *h)
{
int c = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
c++;
}
return (c);
}
