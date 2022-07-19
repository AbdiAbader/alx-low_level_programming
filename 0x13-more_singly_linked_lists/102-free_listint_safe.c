#include "lists.h"
/**
* free_listint_safe - free list in safe
* @h: the head of list
* Return: number of list
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *temp, *hold = *h;
size_t i = 0;
int num;
while (hold)
{
num = hold - hold->next;
if (num > 0)
{
temp = hold->next;
free(hold);
hold = temp;
i++;
}
else
{
free(hold);
*h = NULL;
i++;
break;
}
}
*h = NULL;
return (i);
}
